# a = {}

d = {1:'song', 2:'瓜皮'}
print(d[1])

a = dict([[1, 2], ('song', 18), 'ac'])
print(a)

print(a.get('so', 'ERROR! NOT IN DICT!'))

print(a.keys())
for k in a.keys():
    print(k, " : ", a[k])

c = a.items()
print(c)
for k, v in a.items():
    print(k, '=', v)