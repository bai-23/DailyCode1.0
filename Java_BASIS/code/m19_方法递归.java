public class m19_方法递归 {
    public static void main(String[] args){
        System.out.println("main-begin");
        dosome();
        System.out.println("main-end");
        int res = sum(10);
        System.out.println(res);
        int res2 = sumd(10);
        System.out.println(res2);
    }
    public static void dosome(){
        System.out.println("dosome-begin");
//        dosome();
        System.out.println("dosome-end");
    }
    public static int sum(int n){
//        不适用递归计算1~n的和
        int sum = 0;
        for (int i = 1; i <= n;i++){
            sum += i;
        }
        return sum;
    }
//    使用递归
    public static int sumd(int n){
        if(n == 1){
            return 1;
        }
        return n+sumd(n - 1);
    }

}
