class Pen{

    void displayDetails(){
        System.out.println("This is the pen class.");
    }
}

class Pencil{

    void diplayDetails(){
        System.out.println("This is the pencil class.");
    }
}

class Eraser{
    void displayDetails(){
        System.out.println("This is the Eraser class.");
    }
}

class Main {
    public static void main(String[] args) {
        Pen p1=new Pen();
        Pencil p2=new Pencil();
        Eraser e1=new Eraser();

        p1.displayDetails();
        p2.diplayDetails();
        e1.displayDetails();
        
    }
}
