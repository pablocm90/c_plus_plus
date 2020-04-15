#include <string>
#include <iostream>
#include "Movies.h"

Movies::Movies() {
		std::cout << "Created movie list!" << std::endl;
	}

Movies::~Movies() {}

void Movies::display() {
	std::cout << "Movie name    - rtg - times watched" << std::endl;
	for(auto movie: movie_list) {
		movie.display();
	}
	std::cout << ":::::::::::::::::::::::::::::::::::::::" << std::endl;
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
	Movie movie {name, rating, watched};
	if (!contains_movie(movie)) {
		movie_list.push_back(movie);
		return true;
	}
	return false;
}

bool Movies::contains_movie(Movie new_movie) {
	bool response {false};
	for(auto &movie: movie_list) {
		if(new_movie.get_name() == movie.get_name()) {
			response = true;
			break;
		}
	}
	return response;
}

bool Movies::increment_watched(std::string movie_name) {
	for(auto &movie: movie_list) {
		if(movie.get_name() == movie_name) {
			movie.increment_watched();
			return true;
		}
	}
	return false;
}
