def fn():
    print('the first function')
fn()
print(fn)

# 定义形参
def f1(x, y) :
    return x + y
x = f1(1, 4)
print(x)

# 参数传递的方式
def f2(a, b, c = 10):
    return a*b**c
e = f2(3, 2, 6)
print(e)

# 实参的类型
def fn4(a):
    a = 20  # 重新赋值，不会影响c（改变量）
    print('a=', a)
c = 10
fn4(c)
print('c=', c)

# 不定长参数
def Sum(c, *a):    #接收所有参数
    print(c)
    return sum(a)
a = Sum(1, 2, 3)
print(a)

# 解包
t = (10, 20, 30)
def fn5(a, b, c):
    print('a=', a)
    print('b=', b)
    print('c=', c)
fn5(*t)




