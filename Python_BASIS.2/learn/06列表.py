my_list = []    #空列表
my_list = [10]  #只包含一个元素10
my_list = [10, 20, 30, 40]
# my_list = [10, 'he', True, None, [1, 2, 3], print]


for i in range(0, 4):
    print(id(my_list[i]))
print(len(my_list))

#切片
stus = ['sun', 'sha', 'pig', 'zi', 'bai']
print(stus[0:2])
stus[:4]
stus[:] #复制一遍
stus[1:3:1]

my_list = [1, 2, 3] + [4, 5, 6]

print('sha' in stus)
print(max(stus))
print(stus.index('sun'))
print(stus.count('zi'))

#修改列表





