import urllib.request
response = urllib.request.urlopen('http://placekitten.com/g/500/600')
cat_img = response.read()

with open('cat_500_600.jpg', 'wb') as f:
    f.write(cat_img)

print(response.geturl()) #打印对象地址
print(response.info()) #打印服务器状态
print(response.getcode())