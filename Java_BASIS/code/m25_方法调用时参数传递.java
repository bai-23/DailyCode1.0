public class m25_方法调用时参数传递 {
    public static void main(String[] args){
        int i = 10;
        add(i);     //复制一份i的值给add方法
        System.out.println("main i="+i);

        Person p = new Person();
        p.age = 10;
        addd(p);    //复制 p.age 的地址给addd方法
        System.out.println("main ="+p.age);
    }

    public static void add(int i){
        i++;
        System.out.println("add i="+i);
    }

    public static  void addd(Person p){
        p.age++;
        System.out.println("addd ="+p.age);
    }
}

class Person{
    int age;
}