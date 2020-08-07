public class m31_丈夫和妻子 {
    public static void main(String[] args){
        //创建丈夫、妻子对象
        Husband h1 = new Husband("1111", "张三", "1991-2-5");
//        Husband h1 = new Husband("1111", "张三", "1991-2-5", null);
        Wife w1 = new Wife("22222", "翠花", "1990-6-3");
//        Wife w1 = new Wife("22222", "李四", "1990-6-3", null);
        //结婚: 产生关系（没有结婚产生空指针异常）
        h1.wife = w1;
        w1.husband = h1;
        //输出丈夫的妻子名字
        System.out.println(h1.name+"的妻子是"+h1.wife.name);
        System.out.println(w1.name+"的丈夫是"+w1.husband.name);

    }
}
//丈夫类
class Husband {
    String id;
    String name;
    String birth;
    Wife wife;

    public Husband() {
    }
    public Husband(String s1, String s2, String s3) {
        id = s1;
        name = s2;
        birth = s3;
    }
    public Husband(String s1, String s2, String s3, Wife w) {
        id = s1;
        name = s2;
        birth = s3;
        wife = w;
    }
}

//妻子类
class Wife{
    String id;
    String name;
    String birth;
    Husband husband;
    public Wife(){}
    public Wife(String s1, String s2, String s3){
        id = s1;
        name = s2;
        birth = s3;
    }
    public Wife(String s1, String s2, String s3, Husband h){
        id = s1;
        name = s2;
        birth = s3;
        husband = h;
    }
}