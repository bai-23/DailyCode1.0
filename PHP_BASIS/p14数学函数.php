<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php

        echo pow(2,8);//2^8
        echo '<hr/><pre>';
        //函数相关的函数
        function test($a, $b){
            var_dump(func_get_arg(1));
            var_dump(func_get_args(1));
            var_dump(func_num_args());
        }
        function_exists('test') && test(1, 2, '3', 4);
        
    ?>
    <hr/>
    max();
    rand();得到一个指定区间的随机数
    mt_rand();效率比染得高
    round();四舍五入
    ceil();向上取整
    floor();向下取整
    pow();求指定数字的指定指数次结果
    abs();
    sqrt();

    function_exists();判断指定的函数名字是否在内存中存在
    func_get_arg();在自定义函数中去获取指定数值对应的参数
    func_get_args();在自定义函数中获取所有的参数（数组）
    func_num_args();获取当前自定义函数的参数数量
</body>
</html>