import java.math.BigDecimal;

public class m7_浮点型 {
    public static void main(String[] args) {

        //任意浮点型默认当做double处理，在数据后加上“F/f”，表示float
        float f = 3.14f;
        float f1 = (float)3.14;//可能损失精度
        int i = (int)10.0/2;

        //BigDecimal: 高精度，专用于财经，属于引用数据类型
        System.out.println();

        /*
        注：
            long类型8字节
            float类型4字节
            但是，任意一个浮点型都比整数型空间大
         */

        boolean x = true;
        //boolean o = 1;报错
        if(x){
            System.out.println("女");
        }else{
            System.out.println("男");
        }
        int a = 10, b = 20;
        System.out.println(a < b);

        //总结

    }
}
