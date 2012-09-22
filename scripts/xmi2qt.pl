#!/usr/bin/env perl

use strict;
use warnings;
use XML::Simple;
use Data::Dumper;
use File::Slurp;
use Template;

my $xml = new XML::Simple(keyattr => ['name'], ForceArray => ['generalization', 'ownedAttribute', 'ownedOperation', 'ownedParameter']);

my $xmi = $xml->XMLin($ARGV[0]);
write_file 'dump.log', Dumper($xmi);

my $classesKernel = $xmi->{'uml:Package'}->{'packagedElement'}->{'Classes'}->{'packagedElement'}->{'Kernel'}->{'packagedElement'};

my $tt = Template->new(INTERPOLATE  => 1, INCLUDE_PATH => 'templates/');

open STDOUT, '>', "./uml.pro";
if ($tt->process('template.pro', {
currentPackage => 'Classes::Kernel',
classes => $classesKernel
}) ne 1) { print $tt->error(); }

open STDOUT, '>', "./Classes/Kernel/qtenumeration.h";
if ($tt->process('qtenumeration.h', {
currentPackage => 'Classes::Kernel',
package => $classesKernel
}) ne 1) { print $tt->error(); }

open STDOUT, '>', "./Classes/Kernel/qtenumeration.cpp";
if ($tt->process('qtenumeration.cpp', {
currentPackage => 'Classes::Kernel',
package => $classesKernel
}) ne 1) { print $tt->error(); }

foreach my $key (keys $classesKernel) {
    if ($classesKernel->{$key}->{'xmi:type'} eq 'uml:Class' ) {
        open STDOUT, '>', "./Classes/Kernel/q".lc($key).".h";
        if ($tt->process('class.h', {
            currentPackage => 'Classes::Kernel',
            className => $key,
            classData => $classesKernel->{$key},
        }) ne 1) { print $tt->error(); }
        open STDOUT, '>', "./Classes/Kernel/q".lc($key).".cpp";
        if ($tt->process('class.cpp', {
            currentPackage => 'Classes::Kernel',
            className => $key,
            classData => $classesKernel->{$key},
        }) ne 1) { print $tt->error(); }
    }
}

