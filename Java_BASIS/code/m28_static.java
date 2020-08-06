public class m28_static {


    public static void main(String[] args){
        Chinese c1 = new Chinese("song", "123456");

        System.out.println(Chinese.country+c1.name+c1.id);
        System.out.println(c1.country);
    }
}


class Chinese{
    String name;
    String id;
    static String country = "中国";//共有属性

    public Chinese(){}

    //构造方法
    public Chinese(String s1, String s2){
        id = s2;
        name = s1;
    }

}