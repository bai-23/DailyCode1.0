brand = ['李宁', '耐克', '阿迪达斯']
sl = ['好', '好吗', '哎呀']
dict1 = {'李宁' : 'ok', '耐克' : 'nice', '阿迪达斯' : 'good'}
#print(dict1['李宁']) 
dict2 = {1:'a', 2:'b', 3:'c'}
#print(dict2[2])
dict3 = {}
dict4 = dict(m1 = 'a1', l = 'b1') #创建一个字典
#print(dict4)
#print(dict4['m1'])
dict4['df'] = 'tiancai' #添加一个项
#print(dict4)

dict3.fromkeys((1, 2, 3), ('number'))
print(dict3)
print(dict1.popitem())
print(dict1)
dict1.update(dict2)
print(dict1)

