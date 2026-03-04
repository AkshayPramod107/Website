class A{
    void calculateFee(int amount){
    
    System.out.println("The total amount from class A: "+amount);
    }
}


class B extends A{
    int sum;
    void calculateFee(int amount,int discount){
        sum=amount-discount;
        System.out.println("The total amount from class B: "+sum);
    }
}

class Main {
    public static void main(String[] args) {
        B s1=new B();

        s1.calculateFee(100);
        s1.calculateFee(100,10);

    }
    
}
