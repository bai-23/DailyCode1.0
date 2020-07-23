# 创建一个列表，将列表的所有偶数保存到新的列表

l = [1, 2, 3, 4, 5, 6, 7, 10]

def fn1(n):
    if n % 2 == 0:
        return True
    return False
def fn2(n):
    if n > 5 and n < 10:
        return True
    return False

def fn(fnx, lst):
    new_list = []
    for n in lst:
        if fn2(n):
            new_list.append(n)
    return new_list

res = fn(fn1, l)
print(res)

r = filter(fn1, l)
