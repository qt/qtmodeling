#!/usr/bin/env perl

use strict;
use warnings;
use XML::Simple;
use Data::Dumper;
use File::Slurp;
use File::Path qw(make_path);
use Template;

my $xml = new XML::Simple(keyattr => [], forcearray => ['namespace', 'class', 'enumeration', 'attribute', 'associationend', 'operation', 'accessor', 'parameter']);
my $tt = Template->new(INTERPOLATE  => 1, INCLUDE_PATH => 'templates/');

my $xmi = $xml->XMLin($ARGV[0]);
write_file 'dump.log', Dumper($xmi);

my $namespaces = $xmi->{'namespace'};

foreach my $namespace (@$namespaces) {

make_path($namespace->{path});

my $classes = $namespace->{'class'};
my $enumerations = $namespace->{'enumeration'};

foreach my $class (@$classes) {
    open STDOUT, '>', "./".$namespace->{path}."/".lc($class->{name}).".h";
    if ($tt->process('class.h', {
        namespace => $namespace->{path},
        class => $class
    }) ne 1) { print $tt->error(); }
    open STDOUT, '>', "./".$namespace->{path}."/".lc($class->{name}).".cpp";
    if ($tt->process('class.cpp', {
        namespace => $namespace->{path},
        class => $class
    }) ne 1) { print $tt->error(); }
}

open STDOUT, '>', "./".$namespace->{path}."/qenumerations.h";
if ($tt->process('qenumerations.h', {
    namespace => $namespace->{path},
    enumerations => $enumerations
}) ne 1) { print $tt->error(); }
open STDOUT, '>', "./".$namespace->{path}."/qenumerations.cpp";
if ($tt->process('qenumerations.cpp', {
    namespace => $namespace->{path},
    enumerations => $enumerations
}) ne 1) { print $tt->error(); }

my $priName = lc($namespace->{path} =~ s/\//-/gr);
open STDOUT, '>', "./".$namespace->{path}."/".$priName.".pri";
if ($tt->process('namespace.pri', {
    namespace => $namespace,
}) ne 1) { print $tt->error(); }

}

open STDOUT, '>', "./uml.pro";
if ($tt->process('project.pro', {
    namespaces => $namespaces,
}) ne 1) { print $tt->error(); }
