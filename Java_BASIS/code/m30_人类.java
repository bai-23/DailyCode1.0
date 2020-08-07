public class m30_人类 {
    public static void main(String[] args){
        Man m1 = new Man();
        m1.id = "123456";

        System.out.println(m1.woman);
    }
}

class Man{
    String id;
    String name;
    boolean sex = true;
    Woman woman;
}

class Woman{
    String id;
    String name;
    boolean sex = false;
    Man man;
}
