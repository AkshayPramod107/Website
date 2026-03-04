public class Main {
    public static void main(String[] args) {
        Employee e1=new Employee(1,"sanal",230);
        Employee e2=new Employee(2, "Akshay", 450);
        Employee e3=new Employee(3,"Aswin",320);

        System.out.println("The total number of times when the constructor has been executed: "+Employee.count);
        
    }
}

class Employee{
    int id;
    String name;
    int salary;
    static int count=0;

    Employee(int id, String name, int salary){
        this.id=id;
        this.name=name;
        this.salary=salary;
        count++;
        System.out.println("The employee "+name+" with employee id: "+id+" is having the salary: "+salary);
    }
}
