/*
For this challange you are to develop the foundation for a program
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

The program must support the following:

class Movie - models a movie which includes
-movie name
-movie rating (G, PG, PG-13, R)
-watched - the number of times the movie has been watched

class Movies - models a collection of movie objects

Obviously, Movies needs to know about Movie since it is a collection of Movie object
However, our main driver should only interact with the Movie class.

For example, a simple main should be able to
-create the Movies objects
-ask the Movies object to add a movie by providing the movie name, rating and watched count
-ask the Movies object to increament the watched count by 1 for a movie given its name
-ask the Movies object to diisplay all of its movies

Addiotionally,
-If we try to add a movie whose name is already in the movies collection
we should display this error to user
-If we try to increament the watched count for a movie whose name is not in the movies
collection we should display this erros to user

I've provied a basic shell as a starting point for one possible solution
that has fully implemented
-Movie anf main

You can choose the use my starting point or start from  scratch.

Here is what your project files should look like:
-Movie.h - include file with the Movie class specifation
-Movie.cpp - file with the Movie class implementation
-Movies.h - include file with the Movies class specifation
-Movies.cpp - file with the Movies class implementation
-main.cpp - the main driver that creates a Movies object and adds and increments movies

Don't create a menu-driven system like we've done in the past -- just concentrate on getting
the program working. Once it is working, you can certainly provide a menu system for the user

Here is a sample main and the output. 

*************************main.cpp****************************
*/

#include <iostream>
#include "Movies.h"

//Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

/************************************************
-Helper function
-increment_watched expects a reference to a Movies object
-and the name of  the movie to increment the watched count

-If the wathed count was incremented successfully it
display a success message
-otherwise the watched count could not be incremented
because teh name of the movie was not found

*************************************************/

void increment_watched(Movies &movies, std::string name){
	if(movies.increment_watched(name)){
		std::cout << name << " watch increment" << std::endl;
	}
	else{
		std::cout << name << " not found" << std::endl;
	}
}


/**************************************************
helper function
-add_movie expects a reference to a Movies object
and the name of the movie, rating and the watched count
-If the movie was succesfully added to the movies object it
display a success message
-Otherwise the movie was not added
because the name of the movie was already in movies
***************************************************/

void add_movies(Movies &movies, std::string name, std::string rating, int watched){
	if(movies.add_movie(name, rating, watched)) {
		std::cout << name << " added" << std::endl;
	} else {
		std::cout << name << " already exist" << std::endl;
	}
} 


int main() {

	Movies my_movies;

	my_movies.display();

	add_movie(my_movies, "Big", "PG-13", 2);     //OK
	add_movie(my_movies, "Star Wars", "PG", 5);  //OK
	add_movie(my_movies, "Cindirella", "PG", 7); //OK

	my_movies.display();  //Big, Star Wars, Cindirella

	add_movie(my_movies, "Cindirella", "PG", 7); //Already exist
	add_movie(my_movies, "Ice Age", "PG", 12); //OK

	my_movies.display();  //Big, Star Wars, Cindirella, Ice Age

	increment_watched(my_movies, "Big");         //OK
	increment_watched(my_movies, "Ice Age");     //OK

	my_movies.display();  //Big and Ice watched count increament by 1

	increment_watched(my_movies, "XXXXXX");     // XXXX not found


	return 0;

}
