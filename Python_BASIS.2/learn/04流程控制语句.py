i=2
if i > 1:
    i+=1
    print(i)
import time as t
beg = t.time()
while 1:
    n = input("please add name:")
    if n=="admin":
        print("欢迎 %s 光临~" %n)
        break
    else:
        n2 = input("请输入用户名:")
        if(n2=="root"):
            print("欢迎管理员光临")
            break
        else:
            n3 = int(input("请输入密码:"))
            if n3 == 123:
                print("欢迎 %s 登陆~" % n2)
                break
            else:
                print("ERROR!")
end = t.time()
print(end - beg, "秒")