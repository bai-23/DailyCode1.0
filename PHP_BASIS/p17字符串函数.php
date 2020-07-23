<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <pre>
    <?php

        $a = '123 a 123ada12324a';
        echo strpos($a, 'a'), '<br/>', strrpos($a, 'a'), '<br/>';
        echo str_replace('a', 'b', $a),'<br/>';
        $b = 2;
        echo sprintf("%d", $b), '<br/>';
        echo str_shuffle($a);
    ?>
    <hr>
    转换函数：
            implode(连接方式，数组)：将数组中的元素按照某个规则连接成一个字符串
            explode(分割字符，字符串)：将字符串按照某种格式分割，变成数组
            str_split(字符串，字符长度):按照指定长度分离
    截取函数：
            trim(字符串[,指定字符])：去除两边的空格（默认），可指定要去除的内容
            ltrim（）：去除左边的
            rtrim（）：右边
            substr(字符串，起始位置[，长度])：指定位置开始截取字符串，可指定截取长度
            strstr(字符串，匹配字符)：从指定位置截取到最后（可用来取文件后缀）
    大小写转换：
            strtolower:全部小写
            strtoupper:全部大写
            ucfirst：首字母大写
    查找函数：
            strpos():查找字符串中首次出现的位置，返回false
            strrpos()：最后出现的位置
    替换函数：
            str_replace(匹配目标，替换内容，字符串)
    格式化：
            printf()
            sprintf()
    其他：
            str_repeat():重复某个字符串N次
            str_shuffle()：随机打乱字符
</body>
</html>