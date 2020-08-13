#!/bin/bash

#新建5个用户，且其家目录都在/rhome

#判断/rhome是否存在
[ -f /rhome ] && mv /rhome /rhome.bak
test ! -d /rhome && mkdir /rhome
#[ -f /rhome ] && mv /rhome /rhome.bak || [ ! -d /rhome ] && mkdir /rhome

#创建用户，循环
for ((i=1;i<=5;i++))
 do 
	useradd -d /rhome/stu$i stu$i
	echo 123|passwd --stdin stu$i
 done

