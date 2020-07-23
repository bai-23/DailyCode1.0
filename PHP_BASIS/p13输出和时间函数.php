<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    1.输出函数 
    <?php
        $s = 'junxi';
        echo print('<br/>sf<br/>');
        print 'halo<br/>';
        print('sdsdd<br/>');
        print_r($s);//类似var_dump,但不会输出数据类型，只输出值
    ?>
    2.时间函数
    <?php
        echo date("<br/>l jS \of F Y h:i:s A");//时间戳，格式
        echo '<br/>', time(), '<br/>';//time当前时间戳
        //microtime();当前时间戳转成微秒
        echo '<hr/>', microtime();

         echo '<br/>', strtotime("now");//按照规定格式的字符串转换成时间戳
        
    
    
    ?>

</body>
</html>