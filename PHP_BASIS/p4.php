<html>
<title>嘻嘻</title>
<body>
    <b>
        <?php
        echo '（九）数据类型';
        /*1.简单类型
        整形：int/integer(四字节)
        浮点型：float/double(八字节)
        字符串：string
        布尔：bool/boolean

        2.复合数据类型
        对象类型：object，存放对象（面向对象）
        数组类型：array一次性存储多个数据。

        3.特殊数据类型
        资源类型：resource，存放资源数据（PHP外部数据）
        空类型：NULL
        */
        #4.类型转换：自动转换，强制转换
        #字符串转数值规则
        $a = 'abc1.1.1';
        $b = '1.1.1';
        //echo $a + $b;
        echo '<br/>', (float)$a, (float)$b, '<br/>';

        echo '（十）类型判断', '<hr/>';
        is_int($a);
        is_float($a);//不能用echo，用var_dump
        Var_dump(is_int($a));//返回true或false

        echo '<br/>', gettype($a);//不同于强制转换（复制新的值来判断）
        settype($b, 'int');//直接转换原数值
        echo '<br/>', gettype($b), '<br/>', $b;

        echo '<hr/>', '（十一）整形进制', '<br/>';
        $m = 120;//10
        $n = 0b110;//2  
        $n1 = 0120;//8
        $m1 = 0x120;//16

        echo '<hr/>','(十二)进制转换', '<br/>';
        decbin($m);//（10转2）
        decoct($m1);//(10转8)
        dechex(65);//（10转16）

        bindec($n);//(2转10)...

        ?>
        
    <b>
</body>
</html>