public class m8_运算符1 {
    public static void main(String[] args) {

        int i=10,n, y;
        n = i++; //先赋值再++
        y = ++i; //先++再赋值
        System.out.println(i);
        int c=0;
        System.out.println(c++);

        System.out.println(1 > 2 & 2<5);

        int x = 10, p = 11;
        System.out.println(x>p & x>p++);// 没必要执行“x>p++”
        System.out.println(y);
        System.out.println(x>p && x>p++);
        System.out.println(y);//短路，第二个表达式没有执行

        byte b = 10;
        //b=b+1;"1"为整形
        b += 1;

        char q = '男', f;
        f = q=='男' ? '男': '女';
        System.out.println(f);

        String u = "saa";
        System.out.println("欢迎"+u);
    }
}