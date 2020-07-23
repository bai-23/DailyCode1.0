import com.sun.deploy.security.SelectableSecurityManager;
//import java.utill.scanner;

public class m9_键盘输入 {
    public static void main(String[] args) {
        //创建一个键盘扫描器对象
        java.util.Scanner s = new java.util.Scanner(System.in);



        System.out.print("请输入用户名：");
        String str = s.next();


        //接收用户的输入，int类型
        System.out.print("请输入密码：");
        int i = s.nextInt();
        if (i == 123456);{
            System.out.print("密码正确！");
            System.out.print("欢迎"+str+"回来!");
        }
        if (i != 123456);{
            System.out.print("ERROR!");
        }
    }
}
