public class m11_循环嵌套 {
    public static void main(String[] args) {
        int a, i, j;
        for(i = 1; i < 10; i++){
            for(j = 1; j <= i; j++){
                a = i*j;
                System.out.print(i + "x" + j + "=" + i*j + " ");
            }
            System.out.print("\n");
        }

    }
}
