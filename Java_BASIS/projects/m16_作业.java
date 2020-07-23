import com.sun.deploy.security.SelectableSecurityManager;

public class m16_作业 {
    public static void main(String[] args) {
        java.util.Scanner s = new java.util.Scanner(System.in);
        System.out.print("请输入一个正整数：");
        int n = s.nextInt();
        m1(n);
    }
    public static void m1(int i) {
        int n = i;
        while (!iszhishu(++n)) {
        }
        System.out.print("结果为：" + n);
    }

    public static boolean iszhishu(int n) {
        int j;
        for (j = 2; j < n;j++){
            if (n % j == 0){
                return false;
            }
        }
        return  true;
    }
}
