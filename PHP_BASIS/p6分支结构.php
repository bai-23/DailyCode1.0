<html>

<body>
    <b>
        <?php
        echo '(十六)流程控制', '<br/>';
        /*
   （1）if(1)
        {}
        else
        {}

        if()
        {}
        elseif()
        {}
        else{}

    （2）switch()
        {
            case 值1:
                     ;
                break;
            case 值2:
                     ;
            default:
                break;
        }

    （3）for(初始化条件;边界判定;条件变化)
        {}

    （4）while()
        {}

        do{

        }while();

    （5）中断控制：重新开始循环
        contiue 层级;   默认是1

        break 层级;     默认是1
    （6）流程控制替代语法（html与PHP混搭）
        for(;;){ → for(;;):
        } → endfor;         #其余以此类推
        

        */
        ?>
        <!-- 一般不建议最后写“?>” -->
        <b>
       <table border="1">
           <?php for($i = 1;$i < 10;$i++):?>
                <tr>
                    <?php for($j = 1; $j <= $i; $j++):?>
                        <td>
                            <?php echo $i . '*' . $j . ' = ' . $i * $j;?>
                        </td>
                    <?php endfor?>
                </tr>
           <?php endfor?>
       </table>
       </body>
       </html>