#!/usr/bin/env perl

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

open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($namespace->{path})."enumerations.h";
if ($tt->process('enumerations.h', {
    namespace => $namespace->{path},
    enumerations => $enumerations
}) ne 1) { print $tt->error(); }
open STDOUT, '>', $options{o}."/".$namespace->{path}."/".lc($namespace->{path})."enumerations.cpp";
if ($tt->process('enumerations.cpp', {
    namespace => $namespace->{path},
    enumerations => $enumerations
}) ne 1) { print $tt->error(); }

my $priName = lc($namespace->{path} =~ s/\//-/gr);
open STDOUT, '>', $options{o}."/".$namespace->{path}."/".$priName.".pri";
if ($tt->process('namespace.pri', {
    namespace => $namespace,
}) ne 1) { print $tt->error(); }

}

open STDOUT, '>', $options{o}."/uml.pro";
if ($tt->process('project.pro', {
    namespaces => $namespaces,
}) ne 1) { print $tt->error(); }
