res = 1 and 2
print(res)
a = 1 and 0
print(id(a))
b = 2
a = a >> 9
print(id(a))
print("你好") if a>res else print("不好")