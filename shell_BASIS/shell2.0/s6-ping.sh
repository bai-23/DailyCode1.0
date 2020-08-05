#!/bin/bash

#判断两台主机是否ping通

read -p "请输入主机地址：" ip
ping -c1 $ip &>/dev/null  
#ping完后隐藏结果

if [ $? -eq 0 ];then
	echo "当前主机与远程主机$ip互通"
else
	echo "主机ping$ip失败"
fi
