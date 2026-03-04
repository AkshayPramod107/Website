class Laptop{
    String brand;
    int ram_size;
    int price;
    Laptop(String brand, int ram_size, int price){
        this.brand=brand;
        this.ram_size=ram_size;
        this.price=price;
        System.out.println("The laptop brand is: "+brand+" and the total ram size is: "+ram_size+" and the price is: "+price);
    }
}

class Main {
    public static void main(String[] args) {
        Laptop l1=new Laptop("Acer",0,1234);
    }
}
