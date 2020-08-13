#!/bin/bash

# 需求：随机产生以139开头的电话号。保存到文件中

# 思路
# 产生1000个电话号，脚本需要循环1000次
# 139+8位，后8位随机产生 （RANDOM%10）
# 将随机产生的数字分别保存到变量里，然后加上139保存到文件里

file=./phonenum.txt
for ((i=1;i<=1000;i++))
 do
	#产生号码
	n1=$[$RANDOM%10]
	n2=$[$RANDOM%10]
	n3=$[$RANDOM%10]
	n4=$[$RANDOM%10]
	n5=$[$RANDOM%10]
	n6=$[$RANDOM%10]
	n7=$[$RANDOM%10]
	n8=$[$RANDOM%10]
	echo "139$n1$n2$n3$n4$n5$n6$n7$n8" >> $file
 done
