<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <pre>
    <?php
        $arr = ['pk',2,3];
        $arr1[] = 2;
        echo $arr[0];
        // 1.关联数组：索引下标为字符串

        // 2.多维数组：数组里的元素又是数组

        // 遍历
        foreach($arr as $i){
            echo $i,'<br>';
        }
        shuffle($arr);
        print_r($arr);
        echo "<hr>";
        for($i=0;$i < count($arr);$i++)
        {
            echo $arr[$i],'<br>';
        }
    ?>
    php中数组元素：没有类型限制
                  没有长度限制
    补充：PHP的数组是很大的属性，所以存储位置是堆区，为当前数组分配一块连续的内存
</body>
</html>