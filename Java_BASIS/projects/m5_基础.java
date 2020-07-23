public class m5_基础 {
    public static void main(String[] args){
        char c1 = '中';
        char c2 = '国';
        char m = 't';
        System.out.println("c2");

        int a = 10; //十进制
        int b = 010;    //八进制
        int c = 0x10;   //16进制
        int d = 0b10;   //二进制
        System.out.println(a);
        //在任何情况下，整数型的字面量默认为int型，若要转换为long型，需要在字面量后面添加“l”

        long x = 100;
        //存在类型转换
        //小容量可以自动转换成大容量：自动类型转换

        long n = 200L;
        //不存在类型转换

        long p = 2147483647;
        //自动类型转换

        //long p1 = 2147483648;
        //报错，默认为int
        //p1是long类型，但是2147483648本身被当做int型
        long p2 = 2147483648L;
        //看成为long，不报错

        long x1 = 100L;
        //int y = x1;   错误
        //在java中，大容量不能直接赋值给小容量
        //使用强制类型转换符，可能损失精度
        int y = (int)x;

        byte o = (byte)300;//大转小,砍掉前3个字节
        //300: 00000000 00000000 00000001 00101100
        System.out.println(o);//输出只有44

        byte i = 1;
        //按理说应该报错
        byte i2 = 127;
        //没有超过范围不报错
        short s1 = 32767;
    }
    /**
     * 一、基本数据类型：四大类8小种
     *  第一类：整数型，byte（1）、short（2）、int（4）、long（8）
     *  第二类：浮点型，float（4）、double（8）
     *  第三类：布尔型，boolean（1）
     *  第四类：字符型，char（2）
     * 二、引用数据类型
     *  String：字符串型
     *  java中除了基本数据类型，其他都是引用类型
     *
     * 注：1byte（字节） == 8bit
     *    计算机中，一个二进制的最左边是符号位：01111111，为0时表示正数，为1时表示负数
     */
}
