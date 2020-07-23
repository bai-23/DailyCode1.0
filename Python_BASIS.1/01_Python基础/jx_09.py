import random
secret = random.randint(1, 10)

temp1 = input("输入任意值：")
num1 = int(temp1)
while num1 != 4:
    temp2 = input("ERROR！\n再次输入：")
    num1 = int(temp2)
    if num1 == 4:
        print("YES!")
    else:
        if num1 > 4:
            print("TOO large")
            
        else:
            print("TOO small")
print("GAME OVER!")
   
