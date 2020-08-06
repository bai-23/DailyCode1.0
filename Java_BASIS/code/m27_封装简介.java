public class m27_封装简介 {

    private int age = 2;
    public static void main(String[] args){
    m27_封装简介 m1 = new m27_封装简介();

//        System.out.println(m1.age);
//  对外提供简单的入口

        //创建对象
        m1.dosome();//通过实例.方法调用
        m27_封装简介.dosome1();//通过类名.方法调用

        System.out.println("我是get的年龄："+m1.getAge());
        m1.setAge(5);
        System.out.println("我是set的年龄："+m1.getAge());
    }
    public static void dosome1(){
        System.out.println("我是普通方法");
    }

    public void dosome(){
        System.out.println("我是实例方法");
    }

    public int getAge(){
        return age;
    }
    public void setAge(int nianling){
        //设置条件
        if (nianling>0){
            age = nianling;
        }else {
            System.out.println("宁输入的年龄不合法！");
        }
    }


}
