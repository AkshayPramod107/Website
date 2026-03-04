class Test {
    public int a = 10;
    private int b = 20;
    protected int c = 30;

    public void show() {
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}

public class Main {

    public static void main(String[] args) {
        Test t1=new Test();
        A a1=new A();

        t1.show();
        System.out.println(t1.c);

    }
}

class A{

}