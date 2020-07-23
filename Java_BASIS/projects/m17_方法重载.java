public class m17_方法重载 {
    public static void main(String[] args) {
        sum(10, 1);
        sum(10l,29l);
        sum(19.9, 0.99);
    }

    public static int sum(int a, int b) {
        return a+b;
    }
    public static long sum(long a, long b) {
        return a+b;
    }
    public static double sum(double a, double b) {
        return a+b;
    }
}
