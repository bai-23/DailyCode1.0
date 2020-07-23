import time
n = 0
emlist = ['孙\t500\t男\t1000', '我\t10\t男\t2000', '他\t50\t女\t2000']
t1 = time.time()
print('='*10, '欢迎使用员工管理系统', '='*10)

while 1:
    print('员工管理系统功能：\n\t1.查询员工\n\t2.添加员工\n\t3.炒员工\n\t4.退出系统')
    n = int(input('请选择功能(输入对应数字)：'))
    if n == 4:
        print('！退出系统！')
        time.sleep(2)
        t2 = time.time()
        print('本次使用时间：%s s' % int(t2 - t1))
        break
    elif n == 1:
        i = int(input('请选择打印人数(0~3): '))
        if i > len(emlist):
            print('请输入正确范围的数据！')
            time.sleep(1)
            continue
        print('---------------------------------------------------')
        print('\t姓名\t年龄\t性别\t工资')
        print('----------------------')
        for v in range(0, i):
            print(v+1, end=' ')
            print('|', emlist[v], ' |')
            print('----------------------')
        print('【当前员工总数：%s人】' % len(emlist))
    elif n == 2:
        name = str(input('请输入员工名称：'))
        year = str(input('请输入员工年龄：'))
        sex = str(input('请输入员工性别：'))
        selery = str(input('请输入员工工资：'))
        w = input('确认添加员工？（Y/N）')
        if w == 'Y':
            new1 = ' %s\t%s\t%s\t%s' % (name, year, sex, selery)
            emlist.append(new1)
            print('添加员工成功！')
            print('【当前员工数：%s人】' % len(emlist))
        else:
            print('取消添加')
    elif n == 3:
        na = int(input('请输入删除员工序号：'))
        if na <= len(emlist):
            x = str(input('确认删除员工？（Y/N）'))
            if x == 'Y':
                emlist.pop(na - 1)
                print('删除成功！')
            else:
                print('取消删除！')
        else:
            print('ERROR position, please choose again!')
            continue
        print('【当前员工数：%s人】' % len(emlist))

    else:
        print('输入有误，重新选择！')
    print('='*200)










