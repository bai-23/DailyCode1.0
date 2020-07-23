<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        //类似py的lamda函数
        $niming = function(){
            echo 'hai', '<hr>/';
        };
        $niming();
        var_dump($niming);
        //变量保存匿名函数，本质得到的是一个对象（CLosure）
        function display(){
            $name = __FUNCTION__;

            //定义匿名函数
            $ni = function() use($name){
                echo $name, '<br/>', 'asyou';
            };
            $ni();
            //use就是将外部变量保留给内部使用（闭包）
        }
        display();
        $closure = display();//释放$name
        $closure();//报错
    ?>
        <!-- 
            闭包（closure）：
                函数内部有一些局部变量在函数执行后没有被释放，
                是因为函数内部还有对应的函数在引用（函数的内
                部函数：匿名函数）
         -->
</body>
</html>