#!/bin/bash

if [ "$#" -ne 2 ] || ! [ -f "$1" ]; then
  echo "Usage: $0 <xmi-file> <output-directory>" >&2
  exit 1
fi

mkdir -p $2

/usr/bin/vendor_perl/xpath $1 "//packagedElement[@xmi:type=\"uml:Class\"]/@name" 2> /dev/null | tr ' ' '\n' | cut -d"\"" -f2 | while read CLASS; do if [ $CLASS ]; then echo "Generating inheritance diagram for $CLASS"; ./xmiclassinheritance2png.sh $CLASS $1 "$2/${CLASS}Inheritance.png"; fi; done
