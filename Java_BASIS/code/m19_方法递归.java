public class m19_方法递归 {
    public static void main(String[] args){
        System.out.println("main-begin");
        dosome();
        System.out.println("main-end");
    }
    public static void dosome(){
        System.out.println("dosome-begin");
//        dosome();
        System.out.println("dosome-end");
    }
}
