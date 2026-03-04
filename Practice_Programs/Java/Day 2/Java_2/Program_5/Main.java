class Employee {

    double basicSalary = 30000;

    void calculateSalary() {
        System.out.println("Salary: " + basicSalary);
    }
}

class Manager extends Employee {

    void calculateSalary() {
        super.calculateSalary();
    }
}

public class Main {
    public static void main(String[] args) {

        Manager m1 = new Manager();

        m1.calculateSalary();

    }
}
