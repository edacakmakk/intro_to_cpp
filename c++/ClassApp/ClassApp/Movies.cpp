#include <iostream>
#include "Movies.h"


//Movies no-args constructor
Movies::Movies() {

}

//Movies destructor
Movies::~Movies() {

}

/*******************************************
add_movie expects the name of the movie, rating and watched count

it will search the moviee vector to see if a movie object already exists
with the same name.

if it does then return false since the movie already exists
otherwise create a movie object from the provideed information
and add thet movie object to the movies vector and return true
*********************************************/

bool Movies::add_movie(std::string name, std::string rating, int watched) {
	//you implement this method
	return false;
}


/*******************************************
increment_watched expects the name of the move to incrrement the
watched count

it will search the movies vector to see if a movie object already exists
with the same name.
if it does then increment thet objects watched by 1 and return true.

otherwise return false since then no movies object with the movie name 
provided exists to increment
**********************************************/


bool Movies::increment_watched(std::string name) {
	//you implement this method
	return false;
}


/*********************************************
display

display all the movie objects in the movie vector
for each movie call the movie.display method so the movie 
object display itself
********************************************/


void Movies::display() const {
	//you implement this method
}
