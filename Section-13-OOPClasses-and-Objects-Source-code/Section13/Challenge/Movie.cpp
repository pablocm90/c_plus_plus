#include "Movie.h"
#include <string>
#include <iostream>

Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
	: name{name_val}, rating{rating_val}, watched{watched_val} {
//	std::cout << "I create movie: " << name << std::endl;
//	std::cout << "With name address: " << &name << std::endl;
}

Movie::Movie(const Movie &source) 
	: Movie {source.name, source.rating, source.watched} {
//		std::cout << "Created copy of : " << name << std::endl;
//		std::cout << "With name address of : " << &name << std::endl;
	}

Movie::~Movie() {
//	std::cout << "I destroy movie: " << name << std::endl;
}

void Movie::display() {
	std::cout << name << " - " << rating << " - " << watched << std::endl;
}

void Movie::increment_watched() {
	watched++;
}