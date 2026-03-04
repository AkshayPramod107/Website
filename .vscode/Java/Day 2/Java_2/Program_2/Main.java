class User{
    int userId;
    String userName;
}

class Staff extends User{
    String designation;
    String reportingTo;
}

class Admin extends Staff{
    String adminPassword;
    int level;

    Admin(int userId, String userName, String designation, String reportingTo, String adminPassword, int level){

        this.userId=userId;
        this.userName=userName;
        this.designation=designation;
        this.reportingTo=reportingTo;
        this.adminPassword=adminPassword;
        this.level=level;
    }

    void displayDetails(){
        System.out.println("User Id: "+userId+"\nUsername: "+userName+"\nDesignation: "+designation+"\nReporting to: "+reportingTo+"\nAdmin password: "+adminPassword+"\nLevel: "+level);
    }
}

class Main {
    public static void main(String[] args) {
        Admin a1=new Admin(12, "AkshayPramod", "Ops", "Anoop", "Admion@123", 5);

        a1.displayDetails();
    }
    
}
