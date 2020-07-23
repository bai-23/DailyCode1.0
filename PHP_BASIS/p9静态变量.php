<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        function display(){
            $local = 1;
            static $count = 1;

            echo $local++, '<br/>', $count++;
        }
        display();
        echo '<hr/>';
        display();
        echo '<hr/>';
        display();
        echo '<hr/>';
    ?>
<!--
    静态变量：函数内部定义的变量，用来实现跨函
            数共享数据的变量。(同一个函数被多次调用)
    用法：一般统计当前函数被调用的次数；递归
    语法：static $变量名 = 值;

-->
</body>
</html>

