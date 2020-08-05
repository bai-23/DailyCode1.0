#!/bin/bash

#判断web服务器中http进程是否存在
#ps（√） top（×） pgrep
#实现方法：
#ps -ef | gerp httpd | grep -v 'grep';echo $?
#pgrep httpd;echo $? 进程过滤

pgrep httpd &>/dev/null
if [ $? -ne 0 ];then
	echo "当前进程不存在"
else
	echo "当前进程存在"
fi

#一句话
#test $? -eq 0 && echo "进程存在" || echo "进程不存在"

