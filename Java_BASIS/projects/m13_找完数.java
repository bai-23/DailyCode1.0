public class m13_找完数 {
    public static void main(String[] args) {
        //完数：因子相加等于其本身
        int i, sum, j;
        for(i = 2; i <= 1000; i++){
            sum = 0;
            for(j = 1; j <= i/2; j++){
                if(i % j == 0){
                    sum += j;
                }
            }
            if(i == sum){
                System.out.println(i);
            }
        }
    }
}
