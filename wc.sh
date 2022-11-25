

#/user/bin/sh


cat /dev/null > info         #清空info

types=("*.asm" "*.s" "*.c" "*.cpp" "*.h" "*.cs" "*.java")   #所有要统计的文件类型

for i in ${types[@]}         #遍历每个文件类型

do

    find . -iname $i > tmp    #按类型（大小写不敏感）查找，缓存到tmp

    cat tmp >> info           #将查询结果追加到info

done

sed -i 's/ /\\&/g' info      #处理文件名出现空格的情况

cat info | xargs wc -l > tmp #统计行数，输出到文件

grep -rin "^[ ]*[1-9][0-9]*[ ]*总用量$" tmp > info    #提取行数信息

let sum=0                    #总行数

while read tag count flag    #取出每一批处理结果的行数

do

    let sum=sum+count         #累加行数

done < info                  #指定读取的文件

echo 总行数=$sum行            #显示最终总行数

rm info tmp                  #删除临时文件
