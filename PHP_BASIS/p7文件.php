<?php
    echo '(十七)文件包含', '<br/>';
    $a = 1;
    


?>
<!--
    1.文件包含：在一个PHP脚本中，将另外一个文件（PHP）
                包含进来，合作完成一件事
    2.意义：①代码共享（向上包含（索要））；
            ②向下包含（给予）
    3.形式：
    include：包含文件，系统遇到一次执行一次
    include once：自动判断文件包含过程中，是否已经包含过，
                系统遇到多次只执行一次。
    require：同include
    require once：同include once

    4.语法
    include '文件名';
    include('文件名');    //考虑文件路径

    5.文件嵌套包含：
        一个文件包含另外一个文件，
        同时被包含的文件又包含了另外一个文件（套娃）。
    
    

-->