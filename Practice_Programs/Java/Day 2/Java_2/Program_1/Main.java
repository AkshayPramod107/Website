class Employee{
    int employeeId;
    String employeeName;
}

class Manager extends Employee{
    String department;
    int level;

    Manager(int employeeId, String employeeName, String department, int level){

        this.employeeId=employeeId;
        this.employeeName=employeeName;
        this.department=department;
        this.level=level;
    }

    void displayDetails(){
        System.out.println("Employee ID: "+employeeId+"\nEmployee name: "+employeeName+"\nDepartment: "+department+"\nLevel: "+level);
    }

}


class Main {
    public static void main(String[] args) {
        Manager m1=new Manager(123, "Akshay", "Support", 2);

        m1.displayDetails();
    }

    
}
