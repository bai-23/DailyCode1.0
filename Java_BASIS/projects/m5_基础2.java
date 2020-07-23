public class m5_基础2 {
    public static void main(String[] args) {
        byte a = 127;

        //整数能否直接赋值给char?
        char p = 99;
        System.out.println(p);//直接按编码转换，最终是一个字符

        char c1 = 65535;//上限
        System.out.println(c1);
        //  char c2 = 65536;
        char c2 = (char)65536;
        System.out.println(c2);

        /*
            计算机在底层存储数据的时候，一律存储的是“二进制补码形式”
            原因：效率最高
            补码：二进制分为：原码、反码、补码
            对于正数，原、反、补码为同一个数
            byte i=-1;
            原码：10000001
            反码：11111110  符号位变，其余位取反
            补码：11111111  反码+1
         */

        //混合运算
        char c = 'a';
        byte i = 1;
        System.out.println(c+i);

        //short s = c + i;编译器不知道加法最后的结果是多少
        short s = (short)(c + i);
        System.out.println(s);
        //byte/char/short做混合运算的时候，各自先转换成int再运算
    }

}
