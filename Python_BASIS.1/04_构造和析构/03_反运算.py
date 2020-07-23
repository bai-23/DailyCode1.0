class int(int):
    def __add__(self, other):
        return int.__sub__(self, other)
a = int('5')
print(a)
b = int('3')
print(a + b)#原来的被覆盖

class Za(int):
    def __radd__(self, other):
        return int.__sub__(self, other)#注意self和other的位置
m = Za(5)
n = Za(3)
print(m + n)
print(1 + n)#找不到1

#