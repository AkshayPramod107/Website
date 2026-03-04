class Account {
    int accNo;
    String holderName;
    double balance;

}

class SavingsAccount extends Account {
    double interestRate;

    SavingsAccount(int accNo, String holderName, double balance, double interestRate) {
        this.accNo = accNo;
        this.holderName = holderName;
        this.balance = balance;
        this.interestRate=interestRate;
    }

    void displaySavings() {
        System.out.println("Account No: " + accNo+"\nHolder Name: " + holderName+"\nBalance: " + balance+"\nInterest Rate: " + interestRate + "%");
    }
}

class CurrentAccount extends Account {
    double overdraftLimit;

    CurrentAccount(int accNo, String holderName, double balance, double overdraftLimit) {
        this.accNo = accNo;
        this.holderName = holderName;
        this.balance = balance;
        this.overdraftLimit = overdraftLimit;
    }

    void displayCurrent() {
        System.out.println("Account No: " + accNo+"\nHolder Name: " + holderName+"\nBalance: " + balance+"\nOverdraft Limit: " + overdraftLimit);
    }
}

public class Main {
    public static void main(String[] args) {

        SavingsAccount sa = new SavingsAccount(101, "Akshay", 5000, 4.5);
        CurrentAccount ca = new CurrentAccount(102, "Rahul", 8000, 10000);

        System.out.println("Savings Account Details:");
        sa.displaySavings();

        System.out.println("\nCurrent Account Details:");
        ca.displayCurrent();
    }
}
