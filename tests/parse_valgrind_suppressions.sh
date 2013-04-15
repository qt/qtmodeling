/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtModeling project of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#! /usr/bin/awk -f
# A script to extract the actual suppression info from the output of (for example) valgrind --leak-check=full --show-reachable=yes --error-limit=no --gen-suppressions=all ./minimal
# The desired bits are between ^{ and ^} (including the braces themselves).
# The combined output should either be appended to /usr/lib/valgrind/default.supp, or placed in a .supp of its own
# If the latter, either tell valgrind about it each time with --suppressions=<filename>, or add that line to ~/.valgrindrc

# NB This script uses the |& operator, which I believe is gawk-specific. In case of failure, check that you're using gawk rather than some other awk

# The script looks for suppressions. When it finds one it stores it temporarily in an array,
# and also feeds it line by line to the external app 'md5sum' which generates a unique checksum for it.
# The checksum is used as an index in a different array. If an item with that index already exists the suppression must be a duplicate and is discarded.

BEGIN { suppression=0; md5sum = "md5sum" }
# If the line begins with ' {', it's the start of a supression;
so set the var and initialize things
/^{/  {
        suppression=1;
        i=0;
        next
    }
# If the line begins with '}' its the end of a suppression
    /^
}/  {
    if (suppression)
    {   suppression=0;
        close(md5sum, "to")  # We've finished sending data to md5sum, so close that part of the pipe
        ProcessInput()       # Do the slightly-complicated stuff in functions
        delete supparray     # We don't want subsequent suppressions to append to it!
    }
}
# Otherwise, it's a normal line. If we're inside a supression, store it, and pipe it to md5sum. Otherwise it's cruft, so ignore it
{ if (suppression)
    {
        supparray[++i] = $0
        print |& md5sum
    }
}

function ProcessInput()
{
# Pipe the result from md5sum, then close it
    md5sum |& getline result
    close(md5sum)
# gawk can't cope with enormous ints like $result would be, so stringify it first by prefixing a definite string
    resultstring = "prefix"result

    if (! (resultstring in chksum_array) )
    {   chksum_array[resultstring] = 0;
# This checksum hasn't been seen before, so add it to the array
        OutputSuppression()              # and output the contents of the suppression
    }
}

function OutputSuppression()
{
# A suppression is surrounded by ' {' and '}'. Its data was stored line by line in the array
    print "{"
    for (n=1; n <= i; ++n)
    { print supparray[n] }
    print "}"
}
