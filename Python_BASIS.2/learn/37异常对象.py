print('异常出血前')
try:
    print(a)
except NameError:
    print()
finally:
    pass
print('异常出现后')
print('='*60)

def add(a, b):
   #  如果a和b有负数，就抛出异常
   if a<0 or b<0:
       # raise Exception('两个参数不能有负数！')
       return None
   return a+b
print(add(1, -2))

# 自定义异常
class myerror(Exception):
    pass