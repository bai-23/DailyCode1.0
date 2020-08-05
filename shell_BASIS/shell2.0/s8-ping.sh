#!/bin/bash

#判断门户网站是否可以正常访问
#直接访问 wget/elinks -dump/curl

read -p "请输入网址：" addr
wget $addr &>/dev/null
[ $? -eq 0 ] && echo "当前网址服务ok" && rm -f /shell/index.* || echo "当前网站不行了"



