<html>
<body>
    <b>
    <?php

        play();
        function play(){
            echo 'halow wrde';
        }
        play();

        function add($a1){
            echo $a1 * $a1;
        }
        add(5);

        function jian($n1 = 1, $n2 = 2){
            echo $n1 - $n2;
        }
        jian();

        //引用传值
        function dis($a, &$b){
            $a = $a * $a;
            $b = $b * $b;
            echo '<hr/>', $a,'<br>', $b;
        }
        $a=10;
        $x=5;
        dis($a, $x);
        //错误传值：dis(10,5);
        echo '<br>', $a,'<br>', $x;

        //返回值
        function name(){
            echo '<hr/>',__FUNCTION__;//返回当前函数名字
        }
        name();
        echo '<br/>';
        var_dump(name());

        function ad($n1, $n2){
            return $n1 + $n2;
        }

        $sou = ad(10, 20);
        echo '<br/>', $sou;
        //可在文件中使用return，之后的内容不再执行。

        $global = 'global area';
        function display(){
            $inner = __FUNCTION__;

            echo '<hr/>', $GLOBALS['global'];//内部调用外部
            
            //定义变量：使用全局变量
            global $global;//外部存在
            $global = 'Change';
            echo '<br/>', $global;

            global $local;//外部不存在
            $local = 0;
        }
        display();
        echo '<br/>', $local;

    ?>
    </b>
    <p>
    </br>
    语法：
    function 函数名(参数){
        函数体
        返回值（默认NULL）
    }

    1.默认值：default value,不能左边有默认值。
    2.关键字：

    3.引用传递：只有变量能够引用传递
        function 函数名(形参1，&形参2){
            函数体;
        }
    4.作用域：三种
        全局变量：用户普通定义的变量（函数外部）。
                理论上函数内部不可访问。
        局部变量：函数内部。
        超全局变量：系统定义的变量（预定义变量：$_SERVER/$_POST）

        global关键字：是一种在函数里面定义变量的一种方式。
        1.如果使用global定义的变量名在外部存在（全局变量），
            那么系统在函数内部定义的变量直接指向外部全局变
            量所指向的内存空间（同一变量）；
        2.如果使用global定义的变量名在外部不存在（全局变量），
            系统会自动在全局空间（外部）定义一个与局部变量同
            名的全局变量。        
        语法：
        global 变量名;
        变量名 = 值;
    </br>
    1.一个功能一个函数
    2.在php中允许实参多余形参，函数内部不用而已.
    3.在PHP中理论上形参个数没有限制（实际开发不会太多）。
    4.实参不能少于形参个数。
    </p>
</body>
</html>

