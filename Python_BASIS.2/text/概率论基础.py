import numpy as np

#均值实现
b = [1, 3, 5, 6]
ll = [[1, 2, 3, 4, 5], [3, 4, 5, 8, 8]]
np.mean(b)
np.mean(ll) #全部元素求均值
np.mean(ll, 0)  #按列求均值
np.mean(ll, 1)  #按行求均值
print(np.mean(ll, 0))

#方差与标准差实现
np.var(b)
np.var(ll[0])   #取得ll中的索引为0的元素，求取方差
np.var(ll, 1)    #按行求方差
np.std(b)   #标准差

#协方差
np.cov(b)

#相关系数:比较相似性
vc = [1, 2, 39, 0]
vb = [1, 2, 38, 0]
print(np.corrcoef(vc, vb))

#二项分布实现
from scipy.stats import binom, norm #随机生成后续使用到的数据
import numpy as np  #序列化数据
import matplotlib.pyplot as plt #数据可视化

binom_sim = binom.rvs(n=10, p=0.3, size=10000)
print('data:', binom_sim)
#10000个人，每人做10次该事件，发生概率为p
print('Average:%g' % np.mean(binom_sim))   #打印均值
print('SD: %g' % np.std(binom_sim, ddof=1))#打印标准差
plt.hist(binom_sim, bins=10, normed=True)
plt.xlabel(('x'))
plt.ylabel(('density'))
plt.show()












