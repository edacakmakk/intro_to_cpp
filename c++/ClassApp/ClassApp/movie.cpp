#include <iostream>
#include "movie.h"


//Implementation of the constructor
Movie::Movie(std::string name, std::string rating, int watched)
	:name(name), rating(rating), watched(watched) {

}

//Implementation of copy constructor
Movie::Movie(const Movie& source)
	:Movie{ source.name, source.rating, source.watched } {

}

//Implementation of the destructor
Movie::~Movie() {

}

//Implementation of the display method
// should just insert the movie attributes to cout

void Movie::display() const {
	std::cout << name << ", " << rating << ", " << watched << std::endl;
}
