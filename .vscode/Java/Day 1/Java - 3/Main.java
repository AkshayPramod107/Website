class Student {
    String name;
    int rollNo;
    String course;

    Student(String name, int rollNo, String course) {
        this.name = name;
        this.rollNo = rollNo;
        this.course = course;
    }

    void displayStudent() {
        System.out.println("Class Student\n\nStudent Name: " + name+"\nRoll No: " + rollNo+"\nCourse: " + course);
    }
}

class Employee {
    int id;
    int salary;
    String department;

    Employee(int id, int salary, String department) {
        this.id = id;
        this.salary = salary;
        this.department = department;
    }

    void displayEmployee() {
        System.out.println("\nClass Employee\n\nEmployee ID: " + id+"\nSalary: " + salary+"\nDepartment: " + department);
    }
}

class Product {
    String name;
    int price;
    String category;

    Product(String name, int price, String category) {
        this.name = name;
        this.price = price;
        this.category = category;
    }

    void displayProduct() {
        System.out.println("\nClass Product\n\nProduct Name: " + name+"\nPrice: " + price+"\nCategory: " + category);
    }
}

class Movie {
    String title;
    int rating;
    int duration;

    Movie(String title, int rating, int duration) {
        this.title = title;
        this.rating = rating;
        this.duration = duration;
    }

    void displayMovie() {
        System.out.println("\nClass Movie\n\nMovie Title: " + title+"\nRating: " + rating+"\nDuration: " + duration + " minutes");
    }
}

class BankAccount {
    int accNo;
    String holderName;
    int balance;

    BankAccount(int accNo, String holderName, int balance) {
        this.accNo = accNo;
        this.holderName = holderName;
        this.balance = balance;
    }

    void displayAccount() {
        System.out.println("\nClass Bank Account\n\nAccount Number: " + accNo+"\nHolder Name: " + holderName+"\nBalance: " + balance);
    }
}

public class Main {
    public static void main(String[] args) {

        Student s1 = new Student("Akshay", 101, "Computer Science");
        Employee e1 = new Employee(1, 45, "IT");
        Product p1 = new Product("Laptop", 55, "Electronics");
        Movie m1 = new Movie("Inception", 8, 148);
        BankAccount b1 = new BankAccount(123, "Akshay", 50);

        s1.displayStudent();
        e1.displayEmployee();
        p1.displayProduct();
        m1.displayMovie();
        b1.displayAccount();
    }
}
