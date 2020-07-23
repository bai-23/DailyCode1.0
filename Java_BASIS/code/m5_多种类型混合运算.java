public class m5_多种类型混合运算 {
    public static void main(String[] args) {
        long a = 10L;
        char b = 'a';
        short c = 100;
        int i = 30;

        System.out.println(a+b+c+i);
        //多种数据类型混合运算，最终结果是“最大容量”对应的类型
        //char+short+byte除外（各自转换为int）

    }
}
