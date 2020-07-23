import sys
sys.setrecursionlimit(10)

#工厂函数→类对象
print(type(len))
print(type(int))
class C:
    pass
print(type(C))
a = int('123')
b = int('456')
print('%s' % (a+b))

class New(int):
    def __and__(self, other):
        return int.__sub__(self, other)
    def __sub__(self, other):
        return int.__and__(self, other)
a = New(5)
b = New(3)
print(a+b)

class Try(int):
    def __add__(self, other):
        return self + other
    def __sub__(self, other):
        return self - other
m = Try(5)
n = Try(3)
print(m + n)#递归到最大深度(无限递归)
#修改如下
class Tryagain(int):
    def __add__(self, other):
        return int(self) + int(other)
    def __sub__(self, other):
        return int(self) - int(other)
p = Tryagain(5)
q = Tryagain(3)
print(p + q


