<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>gc_disable</title>
</head>
<body>
    <?php
        $hh = 'display';
        function display(){
            echo __LINE__, __FUNCTION__;
        }
        $hh();

        //回调函数
        //定义系统函数
        function sys_fun($a1, $a2){
            $a1 = 'user1';
            //$a2 += 10;
            return $a1($a2);
        }
        function user1($n){
            return $n * $n * $n * $n;
        }
        echo sys_fun('user1', 10);   //求10的4次方
        
    ?>

    <!-- 
        可变函数：变量 = 值（该值 = 另一个函数名），
                则可使用 变量() 来充当函数名使用

     -->
</body>
</html>
