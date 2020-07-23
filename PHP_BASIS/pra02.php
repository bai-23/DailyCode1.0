<html>

<body>
    <b>
        <?php 
        echo '（六）常量：const/constant,不可改变,不需要变量符号$,通常以大写字母为主';
        #定义形式：1.使用定义常量的函数：define('常量名'，常量值)；该方式可用特殊字符
        #         2.const 常量名 = 值
        
        define('Pi1', 3.14);
        define('^0^', 250);
        const Pi2 = 3.1415;
        #define与const有访问权限区别
        #常量的使用
        echo Pi1,'<hr/>';
        echo constant('^0^');


        ?>
 <!-- 一般不建议最后写“?>” -->
    <b>
</body>
</html>