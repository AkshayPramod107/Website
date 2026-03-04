public class Main {
    public static void main(String[] args) {
        Bank b1=new Bank(12345,"Akshay",100);
        Bank b2=new Bank(7654,"Aswin",200);
        Bank b3=new Bank(5678,"Pramod",534);

        b1.displayDetails();
        b2.displayDetails();
        b3.displayDetails();

    }
}

class Bank{
    static String bankName="SBI";
    int accountNumber;
    String accountHolderName;
    int balance;
    Bank(int accountNumber, String accountHolderName, int balance){
        this.accountNumber=accountNumber;
        this.accountHolderName=accountHolderName;
        this.balance=balance;
    }
    void displayDetails(){
        System.out.println("Welcome to "+bankName+"\nHi "+accountHolderName+",\nYour current account balance of the account: "+accountNumber+" is: "+balance);
    }
}
