def gd(x_start, step, g):   #x_start传入自变量初始值，step学习率，g函数计
    x = x_start
    for i in range(20):
        grad = g(x)     #斜率
        x -= grad * step    #梯度x学习率
        print('[Epoch{0}] grad = {1}, x = {2}'.format(i, grad, x))
        if abs(grad) < 1e-6:
            break
    return

#求取该函数最小值
def f(x):
    return x*x - 2*x - 1
#导函数
def g(x):
    return 2*x - 2

import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-5, 7, 100) #从-5到7长度为100的等差序列
y = f(x)
plt.plot(x, y)
plt.show()

gd(5, 0.1, g)   #学习速率为0.1
print('—' * 100)
gd(5, 100, g)   #学习速率为100，提升1000倍
print('—' * 100)
gd(5, 1, g)     #学习速率为1

