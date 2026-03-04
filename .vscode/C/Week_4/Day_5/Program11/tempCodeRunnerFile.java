public class Main {
    public static void main(String[] args) {
        Car c1=new Car();

        c1.regNumber="ABC123";
        c1.engineNumber="ENG123";
        c1.brand="Suzuki";
        c1.model="Swift";
        c1.price=123;

        System.out.println("Registration number: "+c1.regNumber);
        System.out.println("Engine number: "+c1.engineNumber);
        System.out.println("Brand: "+c1.brand);
        System.out.println("Swift: "+c1.model);
        System.out.println("Price: "+c1.price);
    }
}

class Vehicle{
    String regNumber;
    String engineNumber;
}


class Car extends Vehicle{
    String brand;
    String model;
    int price;
}

