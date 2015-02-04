#!/bin/sh
#date -s 2014-01-09  2014-01-20
#for var in 1 2 3 4 5 6 7
for i in `seq 4`
do
 echo ${i}
 #date -s "1 days"
 touch aaa.txt
 git add aaa.txt
 git commit -m "shell"
 git push origin master
 rm -rf aaa.txt
 git rm aaa.txt
 git commit -m "shell"
 git push origin master
 date -s "1 days"
done
