public class Main {
    public static void main(String[] args) {
        Movie m1=new Movie();
        Movie m2=new Movie(8,"Titanic");
        
    }
}

class Movie{

int rating;
String name;

Movie(){
    System.out.println("The movie Interstellar have 8.7 rating in IMDB.");
}
Movie(int rating, String name){
    this.name=name;
    this.rating=rating;
    System.out.println("The movie "+name+" have "+rating+" rating in IMDB.");
}
}
