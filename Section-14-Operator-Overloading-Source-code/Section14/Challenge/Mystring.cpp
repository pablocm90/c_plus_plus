#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}


/**
 * Member method style overloading 
*/


//Mystring Mystring::operator-() const 
//{
//	char *buff = new char[std::strlen(str) + 1];
//	std::strcpy(buff, str);
//	for(size_t i{0}; i<std::strlen(str); i++) {
//		buff[i] = tolower(buff[i]);
//	}
//	Mystring temp {buff};
//	delete [] buff;
//	return temp;
//}
//
//bool Mystring::operator==(const Mystring rhs) {
//	return *str == *rhs.str;
//}
//
//bool Mystring::operator!=(const Mystring rhs) {
//	return !(*this == rhs);
//}

//
//bool Mystring::operator<(const Mystring rhs) {
//	return strcmp(str, rhs.str) < 0;
//}
//
//bool Mystring::operator>(const Mystring rhs) {
//	return strcmp(str, rhs.str) > 0;
//}
//
//Mystring Mystring::operator+(const Mystring rhs) const{
//	char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//	std::strcpy(buff, str);
//	std::strcat(buff, rhs.str);
//	Mystring temp {buff};
//	delete [] buff;
//	return temp;
//}
//
//Mystring Mystring::operator+=(const Mystring rhs){
//	*this = *this + rhs;
//	return *this;
//}
// 
// 
//Mystring Mystring::operator*(const size_t times) const {
//	char *buff = new char[(std::strlen(str) * times) + 1];
//	std::strcpy(buff, str);
//	for(size_t i{1}; i<times; i++) {
//		std::strcat(buff, str);
//	}
//	Mystring temp {buff};
//	delete [] buff;
//	return temp;
//}
//
//Mystring Mystring::operator*=(const size_t times){
//	*this = *this * times;
//	return *this;
//}
//
//Mystring Mystring::operator++(){
//	for(size_t i{0}; i<std::strlen(str); i++) {
//		(this)->str[i] = toupper((this)->str[i]);
//	}
//	return *this;
//}
//
//Mystring Mystring::operator++(int){
//	Mystring temp {*this};
//	++(*this);
//	return temp;
//}


/**
  * Global method style overloading
*/

Mystring operator-(const Mystring &str_og)
{
	char *buff = new char[std::strlen(str_og.str) + 1];
	std::strcpy(buff, str_og.str);
	for(size_t i{0}; i<std::strlen(str_og.str); i++) {
		buff[i] = tolower(buff[i]);
	}
	Mystring temp {buff};
	delete [] buff;
	return temp;
}
 
bool operator==(const Mystring &lhs, const Mystring &rhs) {
	return *lhs.str == *rhs.str;
}

bool operator!=(const Mystring &lhs, const Mystring &rhs) {
	return !(lhs == rhs);
}

bool operator<(const Mystring &lhs, const Mystring &rhs) {
	return strcmp(lhs.str, rhs.str) < 0;
}

bool operator>(const Mystring &lhs, const Mystring &rhs) {
	return strcmp(lhs.str, rhs.str) > 0;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
	char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, lhs.str);
	std::strcat(buff, rhs.str);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring operator+=(Mystring &lhs, const Mystring &rhs){
	lhs = lhs + rhs;
	
	return lhs;
}
 
 
Mystring operator*(const Mystring &lhs, const size_t times) {
	char *buff = new char[(std::strlen(lhs.str) * times) + 1];
	std::strcpy(buff, lhs.str);
	for(size_t i{1}; i<times; i++) {
		std::strcat(buff, lhs.str);
	}
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring operator*=(Mystring &lhs, const size_t times){
	lhs = lhs * times;
	return lhs;
}

Mystring operator++(Mystring &rhs){
	for(size_t i{0}; i<std::strlen(rhs.str); i++) {
		rhs.str[i] = toupper(rhs.str[i]);
	}
	return rhs;
}

Mystring operator++(Mystring &lhs, int){
	Mystring temp {lhs};
	++(lhs);
	return temp;
}