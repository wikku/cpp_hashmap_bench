#!/bin/bash
BINS="map unordered_map gp tr1"
CASES="1000000 1 1
10000 1 1000
1000000 2 1
10000 2 1000
100 1 100000"
for bin in $BINS; do
	echo $bin
	while read -r line; do
		/usr/bin/time -f ': %e' ./$bin $line 2>&1
		#oiejq.sh ./$bin $line 2> >(grep Time)
	done <<< $CASES
	echo
done
