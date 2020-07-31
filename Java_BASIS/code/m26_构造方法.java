public class m26_构造方法 {
    int id;
    String name;
    int age;
//    手动定义有参数构造方法
    public m26_构造方法(int id, String name, int age){
        System.out.println("hello "+name+", id = "+id);
    }
    public m26_构造方法(){
        System.out.println("我是无参数的构造方法");
//        默认初始化
        //id = 0
        //name = null
        //age = 0
        id = 2;
    }

    public static void main(String[] args){
        new m26_构造方法(2421, "song", 18);
        m26_构造方法 m1 = new m26_构造方法();
        System.out.println(m1.age);
        System.out.println(m1.id);
    }
}
