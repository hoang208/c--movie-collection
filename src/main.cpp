#include <iostream>
#include "Movies.h"

//Increase watched amount for movie
void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
};

//Add movie to collection
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already in the collection" <<  std::endl;
    }
};

int main()
{

    Movies movie_collection;

    movie_collection.display();

    add_movie(movie_collection, "Your Name", "PG", 5);
    add_movie(movie_collection, "Suzume", "PG_13", 2);   

    movie_collection.display();

    add_movie(movie_collection, "Suzume", "PG_13", 2); //Expect "Suzume is already in the collection"
    add_movie(movie_collection, "Ponyo", "PG", 3); 

    movie_collection.display();

    increment_watched(movie_collection, "Ponyo"); //Expect "Ponyo watch incremented"

    movie_collection.display();

    increment_watched(movie_collection, "random");

    return 0;
}