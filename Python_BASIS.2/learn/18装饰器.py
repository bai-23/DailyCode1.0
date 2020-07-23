def add(a, b) :
    ''' 求和 '''
    return a + b
def mul(a, b) :
    '''求乘积'''
    return a * b

# 希望函数在计算前打印一个“开始计算”，结束时“计算完毕”
def new_add(a, b):
    print("开始计算")
    r = add(a, b)
    print("结束计算")
    return r

# r = new_add(23,24)
# print(r)

def fn():
    print("我是fn")

# 装饰器的使用
def begin_end(old):
    '''用来对其他函数进行扩展，在开始前执行'''
    # old为要扩展的对象
    # 创建一个新函数
    def new_func(*args, **kwargs):
        print("开始计算")
        # 调用被扩展的函数
        res = old(*args, **kwargs)
        print("结束计算")
        return res
    # 返回新函数
    return new_func

f1 = begin_end(fn)
# r1 = f1()
# print(f1)

f2 = begin_end(add)
# r2 = f2(2, 3)
# print(r2)

@begin_end
def say():
    print("大家好")

say()