<?php

    //相对路径加载
    include 'p7文件.php';// 1
    include_once './p7文件.php';//  2
    echo '<br/>', $a;

    //绝对路径加载
    include_once 'X:\XAMPP\htdocs\pra\p7文件.php';
    echo '<br/>', $a;


?>

