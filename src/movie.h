#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie
{
private:
    std::string name;   // movie name
    std::string rating;   // the movie rating
    int watched;          // the number of times watched
public:
    // Constructor - expects all 3 movie attributes
    Movie(std::string name, std::string rating, int watched);
    
    // Copy constructor 
    Movie(const Movie &source); 
    
    // Destructor
    ~Movie();
    
    //Getter and Setter
    void set_name(std::string name) {this->name = name; }
    std::string get_name() const { return name; }
    
    void set_rating(std::string rating) {this->rating = rating; }
    std::string get_rating() const { return rating; }
    
    void set_watched(int watched) {this->watched = watched; }
    int get_watched() const { return watched; }
    
    //Watched increment
    void increment_watched() { ++watched; }
    
    //Display
    void display() const;
};

#endif