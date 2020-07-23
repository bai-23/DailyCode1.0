public class m12_while循环 {
    public static void main(String[] args) {
        while(true){
            System.out.println("a");
            break;
        }
        int i = 0;
        do{
            i++;
            System.out.println("i = " + i);
        }while (i <= 10);

        a:for(i = 1;i< 10;i++)
        {
            b:for(int k = 1;k <= i;k++){
                System.out.println("a");
                if(i == 7){
                    break a; //指定终止语句
                }
            }
        }

    }
}
