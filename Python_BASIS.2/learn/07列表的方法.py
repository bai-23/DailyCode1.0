stu = ['sun', 'sha', 'zhu', 'he']
print('原列表:', stu)

#append
stu.append(3)
print('new list: ', stu)

stu.insert(5, 1)
print('new list: ', stu)

stu.extend([1,'hhh'])
print('new list: ', stu)

print(stu.pop(2))
stu.remove(1)
print('new list: ', stu)

stu.reverse()
print('new list: ', stu)

#遍历
i = 0
while i < len(stu):
    print(stu[i])
    i += 1

for v in stu:
    print(v)
    