from scipy.stats import norm #随机生成后续使用到的数据
import numpy as np  #序列化数据
import matplotlib.pyplot as plt #数据可视化

mu = 0
sigma = 1   #标准正态分布
x = np.arange(-10, 10, 0.1)
#生成类似等差序列，x轴
#print(x)
y = norm.pdf(x, mu, sigma)  #同x
plt.plot(x, y)
plt.xlabel('x')
plt.ylabel('density')
plt.show(True)