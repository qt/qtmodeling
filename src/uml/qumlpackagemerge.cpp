/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlpackagemerge.h"
#include "qumlpackagemerge_p.h"

#include <QtUml/QUmlPackage>

QT_BEGIN_NAMESPACE

QUmlPackageMergePrivate::QUmlPackageMergePrivate() :
    mergedPackage(0),
    receivingPackage(0)
{
}

/*!
    \class QUmlPackageMerge

    \inmodule QtUml

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QUmlPackageMerge::QUmlPackageMerge(bool create_d_ptr) :
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlPackageMergePrivate);
}

// Owned attributes

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QUmlPackage *QUmlPackageMerge::mergedPackage() const
{
    return 0;
}

void QUmlPackageMerge::setMergedPackage(QUmlPackage *mergedPackage)
{
    Q_UNUSED(mergedPackage);
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QUmlPackage *QUmlPackageMerge::receivingPackage() const
{
    return 0;
}

void QUmlPackageMerge::setReceivingPackage(QUmlPackage *receivingPackage)
{
    Q_UNUSED(receivingPackage);
}

QT_END_NAMESPACE

