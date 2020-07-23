public class m15_方法执行时内存变化 {
    public static void main(String[] args) {
        System.out.println("main-begin");
        int x = 100;
        m1(x);
        System.out.println("main-over");
    }
    public static void m1(int i) {
        System.out.println("m1-b");
        m2(i);
        System.out.println("m1-o");
    }
    public static void m2(int i) {
        System.out.println("m2-b");
        m3(i);
        System.out.println("m2-o");
    }
    public static void m3(int i) {
        System.out.println("m3-b");
        System.out.println(i);
        System.out.println("m3-o");
    }
}
