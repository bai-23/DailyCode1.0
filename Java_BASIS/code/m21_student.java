public class m21_student {
//    属性
    int stu_id;
    String name = "song";
    int age = 0;
    boolean sex;
    String addr;

//    method
public static void main(String[] args){
//    创建学生对象s1/s2.(都是局部变量)
//    s1/s2称为“引用”
    m21_student s1 = new m21_student();//   创建对象，s1存该对象的地址
    m21_student s2 = new m21_student();

//    System.out.println(m21_student.name);  无法访问
    System.out.println(s1.name);//  只能通过实例对象访问
    s1.age = 18;
    System.out.println(s1.age);
}
}
