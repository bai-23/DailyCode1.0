<!DOCTYPE html>
<html lang="zh">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <pre>
    <?php
        //一般定义
        $str1 = 'hello';
        //结构化定义
        #heredoc结构
        $str2 = <<<EOD
                //边界符EOD后面不能跟任何东西
                字符串内容
EOD;
        #结束边界符必须顶格   
        #nowdoc结构
        $str3 = <<<'EOD'
                这是弹窗内容
                <script>
                    alert('$str1');
                </script>
EOD;
                    
        var_dump($str2, $str3);

        $a = 'hello';
        $str = 'afaf $a';
        $str3 = "afaf $a";#双引号能解析变量，能识别$
    ?>
    1.定义字符串
    2.字符串转义：
            \'：在单引号字符串中显示单引号
            \"：在双引号字符串中显示双引号
            \r：回车
            \n：换行
            \t：类似tab键
            \$：特定识别
    2.字符串长度：strlen()
                mbstring扩展：mb_strlen()
</body>
</html>