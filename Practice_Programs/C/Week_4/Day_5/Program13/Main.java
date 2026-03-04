public class Main {
    public static void main(String[] args) {
        Smartphone s1=new Smartphone();

        s1.deviceId=123;
        s1.brand="Samsung";
        s1.networkType="5G";
        s1.batteryCapasity="5000mAh";
        s1.os="Android";
        s1.storage="256GB";

        s1.displayDetails();

    }
}


class Device{
    int deviceId;
    String brand;
}

class Mobile extends Device{
    String networkType;
    String batteryCapasity;
}

class Smartphone extends Mobile{
    String os;
    String storage;

    void displayDetails(){
        System.out.println("Device ID: "+deviceId);
        System.out.println("Brand: "+brand);
        System.out.println("Network type: "+networkType);
        System.out.println("Battery capasity: "+batteryCapasity);
        System.out.println("OS: "+os);
        System.out.println("Storage: "+storage);
    }
}