public class Main {
    public static void main(String[] args) {
        Student s1=new Student(10,"Akshay",12);
        Car c1=new Car("Suzuki","Swift",123);
        Employee e1=new Employee(12, "Akshay", 100);

        s1.displayDetails();
        c1.displayDetails();
        e1.displayDetails();
        
    }
    
}

class Student{
    int rollNumber;
    String name;
    int age;

    Student(int rollNumber, String name, int age){
        this.rollNumber=rollNumber;
        this.name=name;
        this.age=age;
    }
    void displayDetails(){
        System.out.println("The name of the student with roll number "+rollNumber+" is: "+name+" and he is "+age+" years old.");
    }
}

class Car{
    String brand;
    String model;
    int price;

    Car(String brand, String model, int price){
        this.brand=brand;
        this.model=model;
        this.price=price;
    }

    void displayDetails(){
        System.out.println("The model "+model+" of the car brand "+brand+" is priced at "+price+" Rs.");
    }
}

class Employee{
    int employeeId;
    String name;
    int salary;

    Employee(int employeeId, String name, int salary){
        this.employeeId=employeeId;
        this.name=name;
        this.salary=salary;
    }
    void displayDetails(){
        System.out.println("The employee "+name+" with the employee ID: "+employeeId+" is having a salary of: "+salary+" Rs.");
    }

}