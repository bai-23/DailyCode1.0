import urllib.request
import urllib.parse
import json
import time

while True:
    content = input('请输入需要翻译的内容：')
    if content == 'QUIT':
        break

    url = 'http://fanyi.youdao.com/translate?smartresult=dict&smartresult=rule'

    head = {}
    head['User-Agent'] = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:73.0) Gecko/20100101 Firefox/73.0'


    data = {}
    data['type'] = 'AUTO'
    data['i'] = content
    data['doctype'] = 'json'
    data['version'] = '2.1'
    data['keyfrom'] = 'fanyi.web'
    data['ue'] = 'UTF-8'
    data['smartresult'] = 'true'
    data = urllib.parse.urlencode(data).encode('utf-8')

    req = urllib.request.Request(url, data)
    req.add_header('User-Agent', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:73.0) Gecko/20100101 Firefox/73.0')

    response = urllib.request.urlopen(req)
    html = response.read().decode('utf-8')

    target = json.loads(html)
    target = target['translateResult'][0][0]['tgt']
    #print('\n')
    print("翻译结果为：%s" % (target))
    time.sleep(2)
