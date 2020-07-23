import random #头文件
sec = random.randint(1, 10)
#import os #有用的模块

import pickle
list1 = [1, 2, '爱发科']
pickle_file = open('list1.txt', 'wb', encoding='utf-8')#创建二进制文件
pickle.dump(list1, pickle_file) #装入文件
pickle_file.close()
pickle_file = open('list1.txt', encoding='utf-8') #读取
list1 = pickle.load(pickle_file) #读取
print(list1)