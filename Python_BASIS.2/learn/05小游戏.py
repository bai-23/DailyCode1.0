import time as t

x = 1
print('--------------------------欢迎来到《西游记world》------------------------------')
print('1.孙悟空\n2.白骨精')
n1 = input('请选择角色: ')
print('loading...  ',end=' ')
for i in range(1, 5):
    beg = t.time()
    t.sleep(2)
    end = t.time()
    if i > 20:
        x = x ** 6
        break
    print('%.4f ' % (end - beg), end='')
print('\n加载完毕，欢迎来到“西游记世界”！')
t.sleep(2)
print('正在生成角色...')
t.sleep(3)
l = 100
att = 5
boss = 100
print(f'角色生成完毕！\n当前战斗力：life {l}, attack {att}')
while 1:
    print('模式：\n\t1.练级\n\t2.打怪\n\t3.退出')
    n = int(input("请选择模式："))
    if n == 3:
        t.sleep(2)
        end1 = t.time()
        print(f"退出游戏！\n本次游戏时间：{int(end1-beg)}秒", end=' ')
        break

