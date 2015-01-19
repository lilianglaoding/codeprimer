#!/bin/sh
#date -s 2014-01-09  2014-01-20
for var in 2015-01-09 2015-01-10 2015-01-11 2015-01-12 2015-01-13 2015-01-14 2015-01-15 2015-01-16 2015-01-17 2015-01-18 2015-01-19 2015-01-20
do
 echo ${var}
 date -s ${var}
 touch aaa.txt
 git add aaa.txt
 git commit -m "shell"
 git push origin master
 rm -rf aaa.txt
 git rm aaa.txt
 git commit -m "shell"
 git push origin master
done