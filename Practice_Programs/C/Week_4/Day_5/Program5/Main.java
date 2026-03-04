public class Main {
    public static void main(String[] args) {
        Movie m1=new Movie("Interstellar",8.8);
        Movie m2=new Movie("Titanic",9.1);
    }
    
}

class Movie{
    String name;
    double rating;

    Movie(String movieName, double movieRating){
        name=movieName;
        rating=movieRating;
        System.out.println("The name of the movie is: "+name+" and it has an "+rating+" rating in IMDB.");
    }
}