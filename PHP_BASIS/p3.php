<html>
<body>
    <b>
        <?php 
            echo '（七）系统常量：可直接使用';
            /*常用
            PHP_VERSION：系统版本
            PHP_INT_SIZE：int所占用的字节数
            PHP_INT_MAX：整形能表示的最大值（带符号）
            */
            echo '<hr/>', PHP_VERSION, '<hr/>', PHP_INT_SIZE, '<br/>', PHP_INT_MAX;
            
            echo '（八）特殊常量：称为系统魔术常量：魔术常量的值会跟着环境变化，但用户改变不了';
           /* __DIR__：当前被执行的脚本所在电脑的绝对路径
            __FILE__：当前被执行的脚本所在电脑的绝对路径（带文件自己的名字）
            __LINE__：当前所属的行数

            __NAMESPACE__：当前所属的命名空间
            __METHOD__：当前所属的方法
            __CLASS__：当前所属的类
            */
            echo '<hr/>';
            echo __DIR__, '<br/>', __FILE__, '<br/>', __LINE__, '<br/>';
            echo __LINE__;

        ?>
<b>
</body>
</html>