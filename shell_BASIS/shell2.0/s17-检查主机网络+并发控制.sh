#!/bin/bash

#功能：把能ping通的ip和不能ping通的ip分类，保存到两个文本中

#定义变量
read -p "请输入主机ip：" ip
#ip=192.168.27
#循环去ping主机ip
for ((i=1;i<=10;i++))
 do
 {
	ping -c1 $ip.$i &>/dev/null
	if [ $? -eq 0 ];then
		echo "$ip.$i is ok" >> ./ipping/ip_up.txt
	else
		echo "$ip.$i is down" >> ./ipping/ip_down.txt
	fi
 }&
 done
wait
echo "局域网内ip检查完毕"
