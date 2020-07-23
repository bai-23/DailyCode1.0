import numpy as np
import matplotlib.pyplot as plt

x = np.random.poisson(lam=9, size=10000)
#lam为均值或方差，做10000次实验
pillar = 35
print(x)
a = plt.hist(x, bins=pillar, normed=True, range=[0, pillar], color='y', alpha=0.5)
#range设置图像生成区域，alpha为透明度
plt.plot(a[1][0:pillar], a[0], 'r')
#生成折线图，基于a【1】数据，r为红色
plt.grid()
plt.show()