public class Main {
    public static void main(String[] args) {
        School s1=new School("MES", "Akshay", "Student", 123);

        s1.name="Aswin";

        s1.displayDetails();
        
    }
}

class School{
    final String schoolName;
    String name;
    String role;
    int id;
    
    School(String schoolName, String name, String role, int id){
        this.schoolName=schoolName;
        this.name=name;
        this.role=role;
        this.id=id;
    }

    void displayDetails(){
        System.out.println("School name: "+schoolName);
        System.out.println("The name of the member: "+name);
        System.out.println("The role: "+role);
        System.out.println("ID: "+id);
    }
}