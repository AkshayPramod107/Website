abstract class Course {
    abstract void calculateFee(double amount);
}


class OnlineCourse extends Course {
    int serviceCharge=500;
    double totalCharge=0;
    void calculateFee(double amount) {
        totalCharge=amount+serviceCharge;
        System.out.println("Total online course charge is: "+totalCharge);
    }
}

class OfflineCourse extends Course {
    double hubRent=5000;
    int serviceCharge=500;
    double totalCharge=0;
    void calculateFee(double amount) {
        totalCharge=amount+hubRent+serviceCharge;
        System.out.println("Total offline course charge is: "+totalCharge);
    }
}


public class Main {
    public static void main(String[] args) {
        Course c1 = new OnlineCourse();
        Course c2 = new OfflineCourse();

        c1.calculateFee(10000); 
        c2.calculateFee(10000);
    }
}
