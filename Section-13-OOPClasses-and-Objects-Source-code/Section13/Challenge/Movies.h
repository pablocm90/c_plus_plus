#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private: 
	std::vector<Movie> movie_list;
	bool contains_movie(Movie);
public:
	Movies();
	~Movies();
	
	void display();
	bool add_movie(std::string, std::string, int);
	bool increment_watched(std::string);
};

#endif