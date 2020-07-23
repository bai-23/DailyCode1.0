public class m14_方法简介 {
    //入口主方法
    public static void main(String[] args) {

        sum1(100, 200);
        myclass.sum2();
    }
    public static void sum1(int x, int y){
        int z = x + y;
        System.out.println("z=" + z);
    }
}

class myclass{
    public static void sum2(){
        System.out.println("hai");
        m14_方法简介.sum1(20, 5);
    }
}