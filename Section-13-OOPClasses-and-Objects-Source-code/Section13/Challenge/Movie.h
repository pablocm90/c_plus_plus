#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie 
{
private:
	std::string name;
	std::string rating;
	int watched;
public:
	Movie(std::string, std::string, int);
	Movie(const Movie &source);
	~Movie();
	std::string get_name() {
		return name;
	}
	void display();
	void increment_watched();
};


#endif