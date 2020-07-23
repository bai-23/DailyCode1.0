try:
    sum = 1+ '1' #若此处出现异常，则直接跳到第二个except
    f = open('文件斤斤计较.txt')
    print(f.read())
    f.close()
except TypeError as reason:
    print('文件错误，是：' + str(reason))
except OSError as reason:
    print('文件错误，是：' + str(reason))
#或except (TypeError OSError):