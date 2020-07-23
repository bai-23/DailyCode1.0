import time as t
'''
print(t.strftime("a, %d %b %Y %H:%M:%S +0000"))

#print(t.strptime("30 Nov 14", "%d %b %y"))
print(t.time())

struct_time = t.localtime()
print(struct_time[1])

# 转换
t1 = t.time() # 时间戳数据
print(t1)
print(t.localtime(t1)) #转换为结构化时间
print(t.mktime(t.localtime(t1)))#转换为时间戳
print(t.strptime('2020-12-31', '%Y-%m-%d'))#把字符串时间转化成结构化时间，分隔符前后对应
print(t.strftime('%m/%d/%Y %H:%M:%S', t.localtime(300000000)))
#从1970年开始走300000000秒

print(t.asctime())#把结构化时间转化成字符串时间，打印当前时间
print(t.ctime())#把时间戳时间转化为字符串时间
'''
# 计算时间差应用
time1 = t.mktime(t.strptime('2020-02-17 11:11:00', '%Y-%m-%d %H:%M:%S'))
#time2 = t.mktime(t.strptime('2019-07-25 20:56:00', '%Y-%m-%d %H:%M:%S'))
time2 = t.time()
dif_time = time2 - time1
print(dif_time)
struct_time = t.gmtime(dif_time)
print(struct_time)
print('过去了%d年%d月%d天%d小时%d分钟%d秒'  %(struct_time.tm_year-1970,
                                        struct_time.tm_mon-1,
                                        struct_time.tm_mday-1,
                                        struct_time.tm_hour,
                                        struct_time.tm_min, 
                                        struct_time.tm_sec))