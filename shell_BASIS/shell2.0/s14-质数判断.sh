#!/bin/bash

#用户输入一个数，判断是否为质数

read -p "请输入一个数：" num

#先排除1和2
[ $num -eq 1 ] && echo "$num 不是质数。" && exit
[ $num -eq 2 ] && echo "$num 是质数。" && exit

#for i in {2..$[$num-1]}
#for i in `seq 2 $[$num-1]`
for i in `seq 2 $[$[$num-1]/2]`
 do
	[ $[$num%$i] -eq 0 ] && echo "$num 不是质数" && exit
 done
echo "$num 是质数" && exit
