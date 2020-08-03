# 异常简介
try:
    print(2)
except :
    print('未定义')
else:
    print('没错')

# 异常的传播

def fn():
    print(10/0)
    print('fn')
try:
    fn()
except :
    pass

