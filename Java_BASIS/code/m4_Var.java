public class m4_Var {
    //这里可以定义变量，称为成员变量
    int x = 2;

    public static void main(String[] args){
        System.out.println(1+1);
        System.out.println(true);
        System.out.println("打印");
        System.out.println("sll");//字符串，用双引号
        System.out.println('a');//字符，用单引号
        System.out.println("a");//字符串
        m18_代码封装.p("我是封装");
        int i=1, s = 0;//局部变量,只在方法体中有效，main方法结束，内存空间释放。
        for(i = 1;i <= 10; i++){
            s *= i;
            s++;
            System.out.println(s);
        }
        float k = 10;
        System.out.println(k);
    }
    public static void DO(){
        int k = 1;
        System.out.println(k);
    }
}
/**1、标识符:程序员有权利命名的单词.
 * 2、关键字：全部小写
 * 3、变量：var
 * 4、根据数据类型分配内存
 * 5、变量赋值后才能访问，赋值才开辟内存
 * 6、变量的作用域：有效范围：出了大括号就不认识
 * 7、就近原则：
 */