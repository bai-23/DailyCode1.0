public class m22_user {
    int id;     //实例变量
    int passwd; //实例变量
    String name;//实例变量

    m23_address addr;

    public static void main(String[] args){
        m22_user user1 = new m22_user();
        m23_address ad = new m23_address();

        user1.name = "song";
        user1.id = 242166;
        user1.passwd = 233;
        user1.addr = ad;
        user1.addr.home = "花果山";

        System.out.println("亲爱的"+user1.name+"住在"+user1.addr.home);

//        m21_student s3 = new m21_student();
//        System.out.println(s3.sex);
    }
}
