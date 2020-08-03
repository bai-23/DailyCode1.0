
# 打开文件
f_name = r'text0.txt'
f = open(f_name, 'a', encoding='utf-8')
# with open(f_name) as f:
#     pass

# f.write('fs')




# 读取
# print(f.read())
# 读大文件

# 写
f.write('hello')
f.write('add')




# 关闭
f.close()