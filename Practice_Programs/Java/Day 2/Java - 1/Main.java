class Person{
    String name;
    int age;
}

class Student extends Person{
    int rollNumber;
    String course;

    Student(String name, int age, int rollNumber, String course){

        this.name=name;
        this.age=age;
        this.rollNumber=rollNumber;
        this.course=course;
        
    }
}

class Main {
    public static void main(String[] args) {

        Student s1=new Student("Akshay",26,123,"CSE");

        System.out.println("Name: "+s1.name+"\nAge: "+s1.age+"\nRoll Number:"+s1.rollNumber+"\nCourse"+s1.course);
        
    }
    
}
