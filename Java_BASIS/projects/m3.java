public class m3 {
        //System.out.println("hi");
        //这个位置不能写输出语句
    //main方法（程序的入口），必须放在类体中。
    public static void main(String[] args){
        //args可以随意改，其他位置不能改（main方法）
        System.out.println("hi");
        System.out.println("你好，世界");
        //注释
        /*抓瓦攻城狮*/
        /**
         * javadoc.exe命令解析解析
         *
         * 1.public表示公开，class表示一个类，m3表示类名，类名后面的大括号称为“类体
         * 2.类体最外层必须是一个类的定义
         * 3.public class与class区别：
         *      1、可定义多个class，
         *      2、public的类不是必须的
         *      3、只要有一个class定义，就生成对应的class文件
         *      4、public的类名必须与源文件名保持一致
         */
    }
}
class A{
    public static void main(String[] args){
        System.out.println("hi");
    }
}
