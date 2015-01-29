#!/bin/bash

d1=$(date "+%s" -d "2015-1-11")
d2=$(date "+%s")
ch=$(((d2-d1)/86400))
echo $ch

#date -s "-$ch days" 
#exit 0