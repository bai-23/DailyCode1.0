public class m10_选择语句 {
    public static void main(String[] args) {
        int i, a, j, b, c;
        j = 1;
        System.out.print("\t");
        for(i = 1;i < 101;i++) {
            if (i <= 100) {
                System.out.print("●");
                System.out.print("○");
                if (i % 5== 0){
                    System.out.print("\n");
                }
                System.out.print("\t");

            }
        }
    }
}
