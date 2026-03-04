public class Main {
    public static void main(String[] args) {
        User u1=new User();
        User u2=new User("Akshay", "Thrissur", 20);
        
    }
    
}


class User{
    String name;
    String place;
    int age;

    User(){
        System.out.println("This is invoked when the default constructor is used.");
    }
    User(String name, String place, int age){
        this.name=name;
        this.place=place;
        this.age=age;

        System.out.println("\nThis is when the parameterized constructor is used\nThe name is: "+name+"\nPlace: "+place+"\nAge: "+age);

    }
}