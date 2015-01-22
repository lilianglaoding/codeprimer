#!/bin/sh
#date -s 2014-01-09  2014-01-20
for var in 2015-01-19 2015-01-20
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
