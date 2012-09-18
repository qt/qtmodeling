#!/usr/bin/env perl

use strict;
use warnings;
use XML::Simple;
use Data::Dumper;
use Template;

my $xml = new XML::Simple(KeyAttr => {packagedElement => 'name'}, ForceArray => 1);

my $xmi = $xml->XMLin($ARGV[0]);

my $classesKernel = $xmi->{'uml:Package'}->[0]->{'packagedElement'}->{'Classes'}->{'packagedElement'}->{'Kernel'}->{'packagedElement'};

my $tt = Template->new(INTERPOLATE  => 1);
foreach my $key (keys $classesKernel) {
    if ($classesKernel->{$key}->{'xmi:type'} eq 'uml:Class' && $key eq 'Comment' ) {
        if ($tt->process('templates/template.h', {
            className => $key,
            classData => $classesKernel->{$key},
        }) ne 1) { print $tt->error(); }
        last;
    }
}

