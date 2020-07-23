<html>

<body>
    <b>
        <?php 
            echo '（一）习惯注释';
            #这样也可以
            /*这样也可以*/
            echo 'hello word<hr/>';

            echo '（二）语句分隔符“;”,最后一行php代码可以没有分号';
            echo '（三）';         
            $var1;#     定义变量
            $var2 = 1;#     定义变量同时赋值
            echo $var2;#    访问变量(输出)
            unset($var2);#     删除变量
            #echo $var2;

            
            echo '（四）预定义变量：系统定义的变量，都是数组';
            /*
            $_GET: 获取所有表单以get方式提交的数据
            $_POST: POST提交的数据都会保存在此
            $_REQUEST: GET和POST提交的都会保存
            $GLOBALS: php中所有的全局变量
            $_SERVER: 服务器信息
            $_SESSION: session会话数据
            $_COOKIE: cookie会话数据
            $_ENV: 环境信息
            $_FILES: 用户上传的文件信息
            */

            echo '（五）可变变量(类似C++指针地址)';
            $a = 'b';
            $b = 'bb';

            echo '<hr/>',$$a;

            echo '（六）变量传值';
            /*
            值传递：将原值复制一份，新值存到另一个地址（两变量没有关系）。
            $m = 1;
            $n = $m;
            $n = 2;
            echo $m,$n //-> 1,2
            引用传递：将原值的地址传给新值，两变量指向同一块内存空间。
            $m = 1;
            $n = &$m; //取地址
            $n = 2;
            echo $m,$n //-> 2,2
            */
        ?>
        <!-- 一般不建议最后写“?>” -->
    <b>
</body>
</html>