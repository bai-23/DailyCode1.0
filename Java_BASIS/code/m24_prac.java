public class m24_prac {
    A1 o1;

    public static void main(String[] args){
        D1 d = new D1();
        C1 c = new C1();
        B1 b = new B1();
        A1 a = new A1();
        m24_prac t = new m24_prac();

        c.o4 = d;
        b.o3 = c;
        a.o2 = b;
        t.o1 = a;
        System.out.println(t.o1.o2.o3.o4.i);
    }

}
class A1{
    B1 o2;
}
class B1{
    C1 o3;
}
class C1{
    D1 o4;
}
class D1{
    int i = 100;
}