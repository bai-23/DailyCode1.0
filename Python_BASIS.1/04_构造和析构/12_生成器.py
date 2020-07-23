'''
def my():
    print('生成器执行')
    yield 1 # 返回1
    yield 2
my1 = my()
print(next(my1))
print(next(my1))
#print(next(my1))

for i in my():
    print(i)

def li():
    a = 0
    b = 1
    while True:
        a, b = b, a + b
        yield a
for each in li():
    if each > 100:
        break
    print(each, end = ' ')
'''
#列表推导式
a = [i for i in range(100) if not (i % 2) and i % 3]
print(a)

#字典推导式
b = {i: i%2==0 for i in range(10)}
print(b)

#集合推导式
c = {i for i in [1, 1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 9]}
print(c)

#字符推导式与元组推导式不成立
e = (i for i in range(10)) #()生成器
print(e)
print(next(e))

Sum = sum(i for i in range(100) if i % 2)
print(Sum)

