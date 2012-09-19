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
foreach my $key (keys $classesKernel) {
    if ($classesKernel->{$key}->{'xmi:type'} eq 'uml:Class' && ($key eq 'NamedElement' || $key eq 'Association' || $key eq 'EnumerationLiteral') ) {
        if ($tt->process('template.h', {
            currentPackage => 'Classes::Kernel',
            className => $key,
            classData => $classesKernel->{$key},
        }) ne 1) { print $tt->error(); }
    }
}

