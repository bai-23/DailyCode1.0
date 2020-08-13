#!/bin/bash

# 在1000个手机号里抽奖5个幸运观众，显示出来
# 只显示头3个数和尾号的4个数

# 思路
# 确定幸运观众所在行： 0-1000随机找一个数字  $RANDOM%1000+1
# 将电话号提前出来：head -行号 文件名 | tail -l
# 显示前3个和后4个号码 echo 139****

phone=./phonenum.txt
for ((i=1;i<=5;i++))
do
	#定位幸运观众所在行
	line=`wc -l $phone |cut -d' ' -f1`
	luck_line=$[$RANDOM%$line+1]
	#取出幸运观众所在行的电话号码
	luck_num=`head -$luck_line $phone|tail -l`
	#显示到屏幕
	echo "139****${luck_num:7:4}"
	echo $luck_num >> luck.txt
	#删除已经被抽取的幸运观众号码
	#sed -i "/$luck_num/d" $phone
done
