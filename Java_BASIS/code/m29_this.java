public class m29_this {
    public static void main(String[] args){
        Cust c1 = new Cust("song");
        Cust c2 = new Cust("俊熙");
        c1.shop();
        c2.shop();
//        System.out.println();
    }
}
//顾客类
class Cust{
    //属性
    String name;
    public Cust(){ }
    public Cust(String s){
        name = s;
    }
    //方法
    public void shop(){
        System.out.println(this.name+"正在购物");
//        System.out.println(name+"正在购物");
    }
}

class tet{
    String name = "张三";
    public void m1(){
        tet t1 = new tet();
        System.out.println(t1.name);
    }
}