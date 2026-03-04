public class Main {
    public static void main(String[] args) {
        Student s1=new Student();

        s1.name="Akshay";
        s1.age=26;
        s1.id=123;
        s1.courseName="Science";

        System.out.println("Name: "+s1.name);
        System.out.println("Age: "+s1.age);
        System.out.println("id: "+s1.id);
        System.out.println("Course name: "+s1.courseName);

    }
}

class Person{
    String name;
    int age;
}

class Student extends Person{
    int id;
    String courseName;
    
}