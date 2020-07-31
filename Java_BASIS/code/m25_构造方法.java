public class m25_构造方法 {

    int id;
    String name;
    //创建构造方法
    public m25_构造方法(){
        System.out.println("hi");
    }

    public static void main(String[] args){
//        调用构造方法
        m25_构造方法 s1 = new m25_构造方法();
        System.out.println(s1);
//        调用构造方法
        new m25_构造方法();

    }
}
