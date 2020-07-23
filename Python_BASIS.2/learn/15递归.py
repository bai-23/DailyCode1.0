# 求10的阶乘
# 常规方法
n = int(input("输入一个数："))
i = int(input("输入次幂："))
# def jiech(n):
#     res = n
#     for i in range(1, n):
#         res *= i
#     return res
# res1 = jiech(n)
# print(res1)

count = 0
# 递归法
def jiech2(n):
    global count
    count += 1
    # 基线条件 判断n是否为1
    if n == 1:
        return 1
    print("第%s次调用, res = %s * %s!" % (count, n, n-1))
    # 递归条件
    return n * jiech2(n-1)

res2 = jiech2(n)
print("阶乘等于=", res2)


# 幂运算
def power1(n, i):
    if i == 1:
        return n
    return n * power1(n, i-1)

res3 = power1(n, i)
print("幂=", res3)

str1 = input("输入一个字符串：")
# 判断回文
def hui_wen(s):
    # 从两边最外层开始检查
    if len(s) < 2:
        return True
    elif s[0] != s[-1]:
        return False
    
    # 递归条件
    return hui_wen(s[1:-1])
print(hui_wen(str1))