import numpy as np

print(np.zeros((3, 4)))
type(np.zeros((3,4)))

n = np.random.rand(2, 3, 4)
#随机2个3X4矩阵
print(n)

a = np.array([1, 2, 3])
print(a.shape)
print(a.dtype)
b = np.array([1, 2, 3.0])
print(b.shape)
print(b.dtype)

c = np.mat(np.zeros((3, 3)))
#matrix对象
print(c)

np.eye(4)
#单位矩阵

x = np.arange(12)#一维数组
print(x.shape)  #查看数组大小
#把x转换成二维矩阵，其中矩阵的第一个维度为1.
x = x.reshape(1, 12)
print(x)
print(x.shape)
x = x.reshape(3, 4)
print(x.T)#转置

#矩阵相乘
Z = np.arange(6).reshape(3, 2)#数组对象,可有Z*Z运算(哈达马积运算)
X = np.arange(6).reshape(2, 3)#但Z*X不行

Z = np.mat(Z)
X = np.mat(X)#转换成矩阵对象

print('\n', Z * X)

#逆矩阵
A = np.arange(4).reshape(2, 2)
B = np.linalg.inv(A)
print(B)
print(np.matmul(B, A))

#特征值与特征向量
g = np.diag((1, 2, 3))#引入对角矩阵
w, e = np.linalg.eig(g) #特征值赋给w，对应特征向量赋值给e
#特征值为1,2,3
print(w)
print(e)
#若使用一个值结收，则返回为元组
p = np.linalg.eig(g)
print(p)
print(type(p))

#奇异值分解
#......


#线性方程组求解
j = np.array([[3, 1, -2], [1, -1, 4], [2, 0, 3]])
k = np.array([5, -2, 2.5])#非齐次
l = np.linalg.solve(j, k)
print(l)