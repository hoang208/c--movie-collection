#include <iostream>
#include "Movie.h"

// Construcor
Movie::Movie(std::string name, std::string rating, int watched) 
    : name(name), rating(rating), watched(watched)  {
}

//Copy constructor
Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched} {
}

//Destructor
Movie::~Movie() {
}

// Display
void Movie::display() const {
    std::cout << name << ", " << rating <<  ", " << watched  <<   std::endl;
}