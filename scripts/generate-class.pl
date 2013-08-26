#!/usr/bin/env perl
#############################################################################
##
## Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
## Contact: http://www.qt-project.org/legal
##
## This file is part of the QtModeling project of the Qt Toolkit.
##
## $QT_BEGIN_LICENSE:LGPL$
## Commercial License Usage
## Licensees holding valid commercial Qt licenses may use this file in
## accordance with the commercial license agreement provided with the
## Software or, alternatively, in accordance with the terms contained in
## a written agreement between you and Digia.  For licensing terms and
## conditions see http://qt.digia.com/licensing.  For further information
## use the contact form at http://qt.digia.com/contact-us.
##
## GNU Lesser General Public License Usage
## Alternatively, this file may be used under the terms of the GNU Lesser
## General Public License version 2.1 as published by the Free Software
## Foundation and appearing in the file LICENSE.LGPL included in the
## packaging of this file.  Please review the following information to
## ensure the GNU Lesser General Public License version 2.1 requirements
## will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
##
## In addition, as a special exception, Digia gives you certain additional
## rights.  These rights are described in the Digia Qt LGPL Exception
## version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
##
## GNU General Public License Usage
## Alternatively, this file may be used under the terms of the GNU
## General Public License version 3.0 as published by the Free Software
## Foundation and appearing in the file LICENSE.GPL included in the
## packaging of this file.  Please review the following information to
## ensure the GNU General Public License version 3.0 requirements will be
## met: http://www.gnu.org/copyleft/gpl.html.
##
##
## $QT_END_LICENSE$
##
############################################################################/

use strict;
use warnings;

use Getopt::Std;
use File::Path qw(make_path);
use XML::XPath;
use Template;

my %options=(); 
getopt("oic",\%options);

my $tt = Template->new(INTERPOLATE  => 1, INCLUDE_PATH => 'templates/');

my $xmi = XML::XPath->new(filename => $options{i});
my $namespace = $xmi->findvalue('//uml:Package/@name');
my $classset = $xmi->findnodes('//packagedElement[@xmi:type=\'uml:Class\' and @name=\'' . $options{c} . '\']');

binmode STDOUT, ':utf8';

foreach my $class ($classset->get_nodelist) {
    my $className = $class->findvalue('@name');
    open STDOUT, '>', $options{o}."/".$namespace."/q".lc($namespace).lc($className).".h";
    if ($tt->process('class.h', {
        xmi => $options{i},
        namespace => $namespace,
        className => $className
    }) ne 1) { print $tt->error(); }
    close STDOUT;
    open STDOUT, '>', $options{o}."/".$namespace."/q".lc($namespace).lc($className).".cpp";
    if ($tt->process('class.cpp', {
        xmi => $options{i},
        namespace => $namespace,
        className => $className
    }) ne 1) { print $tt->error(); }
    close STDOUT;
}
