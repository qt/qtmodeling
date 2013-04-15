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
use XML::Simple;
use Data::Dumper;
use File::Slurp;
use File::Path qw(make_path);
use Template;
use Getopt::Std;

my %options=();
getopt("oi",\%options);

my $xml = new XML::Simple(keyattr => { 'class' => '+name', 'attribute' => '+id', 'associationend' => '+id' }, forcearray => ['namespace', 'class', 'enumeration', 'attribute', 'associationend', 'operation', 'accessor', 'parameter', 'forwarddecl', 'superclass']);
my $tt = Template->new(INTERPOLATE  => 1, INCLUDE_PATH => 'templates/');

my $xmi = $xml->XMLin($options{i});
#write_file 'dump.log', Dumper($xmi);

my $namespaces = $xmi->{'namespace'};

foreach my $namespace (@$namespaces) {

make_path($options{o}."/".$namespace->{path});

my $classes = $namespace->{'class'};
my $enumerations = $namespace->{'enumeration'};

binmode STDOUT, ':utf8';

foreach my $class (values %$classes) {
    open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($class->{name}).".h";
    if ($tt->process('class.h', {
        namespace => $namespace->{path},
        class => $class,
        classes => $classes
    }) ne 1) { print $tt->error(); }
    open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($class->{name})."_p.h";
    if ($tt->process('class_p.h', {
        namespace => $namespace->{path},
        class => $class,
        classes => $classes
    }) ne 1) { print $tt->error(); }
    open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($class->{name}).".cpp";
    if ($tt->process('class.cpp', {
        namespace => $namespace->{path},
        class => $class,
        classes => $classes
    }) ne 1) { print $tt->error(); }
}

open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($namespace->{path})."namespace.h";
if ($tt->process('namespace.h', {
    namespace => $namespace->{path},
    enumerations => $enumerations
}) ne 1) { print $tt->error(); }
open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($namespace->{path})."namespace.cpp";
if ($tt->process('namespace.cpp', {
    namespace => $namespace->{path},
    enumerations => $enumerations
}) ne 1) { print $tt->error(); }

my $priName = lc($namespace->{path} =~ s/\//-/gr);
open STDOUT, '>', $options{o}."/".$namespace->{path}."/".$priName.".pri";
if ($tt->process('namespace.pri', {
    namespace => $namespace,
}) ne 1) { print $tt->error(); }

}

open STDOUT, '>', $options{o}."/project.pro";
if ($tt->process('project.pro', {
    namespaces => $namespaces,
}) ne 1) { print $tt->error(); }
