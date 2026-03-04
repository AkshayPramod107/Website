class A{
    int value=123;
    String name="Saree";

    void displayValue(){

        System.out.println("The value of the product "+name+" is: "+value);
    }

}

class B{

    String colour;
    int price;

    B(String colour, int price){
        this.colour=colour;
        this.price=price;

        System.out.println("The "+colour+" product price starts from "+price+" onwards.");
    }

}



class Main {
    public static void main(String[] args) {
        A obj1=new A();
        B obj2=new B("Blue",123);

        obj1.displayValue();
        System.out.println(obj2.colour);
                
    }
}
