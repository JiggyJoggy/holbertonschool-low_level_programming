#!/bin/bash
cf=$(find . -name "*.c")

for cf in $cf;
do
	gcc -c -o ${cf%.*}.o $cf
done
ar r liball.a *.o
