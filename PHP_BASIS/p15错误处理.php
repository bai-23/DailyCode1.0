<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        header('content-type:text/html;charset=utf-8');
        echo 'hello';
        echo '<hr/><pre>';

        //错误处理
        $a = 100;
        $b = 0;
        // if($b == 0){
        //     trigger_error('除数不能为0');//默认notice，会继续执行
        //     trigger_error('除数不能为0！', E_USER_ERROR);
        //     //默认error，代码不会执行
        // }
        //echo  $a / $b;
        echo '<hr>';
        function my_error($errno, $errstr, $errfile, $errline){
            //判断：当前会碰到的错误有哪些
            if(!(error_reporting() & $errno)){
                return false;
                //error_reporting没有参数代表获取当前系统错误处理对应级别
            }
            //开始判断错误类型
            switch($errno){
                case E_ERROR:
                case E_USER_ERROR:
                    echo ' fatal arror in file '.$errfile.' on line '.$errfile.'<br/>';
                    echo 'error info : '.$errstr;
                case E_NOTICE:
                case E_USER_NOTICE:
                    echo 'Notice in file' .$errfile.'on line '. $errline.'<br/>';
                    echo 'error info';
                    break;
            }
            return true;
        }
        //errno，是系统提供的错误代码：E_ALL、、、

        echo $c;//报错
        set_error_handler('my_error');

        
            
    ?>
    1、语法错误：parse error
    2、运行时错误：runtime error
    3、逻辑错误：代码正常执行，但结果不正确

    错误代号:所有看到的错误代码在PHP中都被定义成了系统常量（可直接使用）
    1、系统错误：
        E_PARSE：编译错误，部执行
        E_ERROR：fatal error致命错误，导致代码不能继续执行
        E_WARBING：不会影响代码执行
        E_NOTICE：通知错误，不会影响代码执行，影响美观
    2、用户错误：用户使用自定义错误触发的时候
        E_USER_ERROR....
    3、其他：E_ALL,代表所有错误，建议在开发环境中使用

    所有E开头的错误常量都是由一个字节存储，然后每一种错误占据一个对应的位
    ，如果想进行一些错误的控制，可以使用位运算进行操作
    例：排除通知级别notice: E_ALL & ~E_NOTICE
       只要警告和通知：E_WARNING | E_NOTICE
    
    4、错误触发
        程序运行时触发:...
        人为触发：知道某些逻辑可能出错，从而使用对应的判断代码来触发响应的错误提示
    5、错误显示设置
        处理哪些错误显示，如何显示
        1、PHP的配置文件：全局配置：php.ini
            display_errors:是否显示错误
            error_reporting:显示什么级别的错误
        2、php脚本中（级别比配置文件高）
           error_reporting():设置对应的错误显示级别
           ini_set('error_reporting', E_ALL);
           ini_set('display_errors', 1);
    6、错误日志设置
        error_log
    7、自定义错误处理
        trigger_error()函数，不会阻止系统报错
        如何把自定义的函数放到系统函数中？set_error_handler()

</body>
</html>