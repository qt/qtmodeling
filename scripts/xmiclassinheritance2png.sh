#!/bin/bash

if [ "$#" -ne 3 ] || ! [ -f "$2" ]; then
  echo "Usage: $0 <uml-class> <xmi-file> <output.png>" >&2
  exit 1
fi

printf "Analyzing xmi file: "
exec 1> $3.g

parentsof() {
printf "." > /dev/stderr
/usr/bin/vendor_perl/xpath $2 "//packagedElement[@name=\"$1\"]/generalization/@general" 2> /dev/null | tr ' ' '\n' | cut -d"\"" -f2 | while read PARENT; do if  [ $PARENT ]; then echo "$1 -> $PARENT;"; parentsof $PARENT $2; fi; done;
/usr/bin/vendor_perl/xpath $2 "//packagedElement[@name=\"$1\"]/generalization/general/@xmi:idref" 2> /dev/null | tr ' ' '\n' | cut -d"\"" -f2 | while read PARENT; do if  [ $PARENT ]; then echo "$1 -> $PARENT;"; parentsof $PARENT $2; fi; done;
}

echo "strict digraph G {";
echo "graph[ranksep=1.5, rankdir=BT];";
echo "$1;"
parentsof $1 $2
echo "}"

dot -Tpng -o $3 $3.g
rm -rf $3.g
printf "\n" > /dev/stderr
