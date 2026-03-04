class User{
    String name;
    int age;
    String email;
    String place;
    int phoneNumber;

    User (String name, int age, String email, String place, int phoneNumber){
        this.name=name;
        this.age=age;
        this.email=email;
        this.place=place;
        this.phoneNumber=phoneNumber;        
    }

    void displayDetails(){
            System.out.println("Name: "+name+"\nAge: "+age+"\nEmail: "+email+"\nPlace: "+place+"\nPhone number: "+phoneNumber);
        }
}

class Main {
    public static void main(String[] args) {
        User u1=new User("Akshay",26,"akshaypramod@gmail.com","Thrissur",123);

        u1.displayDetails();

    }
    
}
