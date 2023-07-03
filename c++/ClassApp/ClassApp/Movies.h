#pragma once
#include <vector>
#include <string>
#include "movie.h"


class Movies
{
private:
	std::vector<Movie> movie;

public:
	Movies();      //constructor
	~Movies();     //Destrucor


	/********************************************************
	add_movie expects the name of the movie, ratinf and watched count

	it will search the movies vector to see if a movie object already exists
	with the same name.

	if it does then return false since th emovie already exists
	otherwise, create a movie object from the provided information
	and add that movie object to the movies vector and return true
	
	**********************************************************/

	bool add_movie(std::string name, std::string rating, int watched);


	/***********************************************************
	increment__watched expects the name of the movie to increment the watched count

	ıt will search the movies vector to see if amovie object already exists
	with the same name.
	if it does then increment that objects watched by 1 and return true.

	Otherwise return false since then no movies object with the movie name
	provided exists to increment
	
	***************************************************************/


	bool increment_watched(std::string name);


	/*************************************************************
	display

	display all the movie objects in the movies vector.
	for each movie call the movie.display method so the movie
	object display itself
	
	***************************************************************/

	void display() const;
};

