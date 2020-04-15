#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
/**
 * Global method style overloading
 */
 
	friend Mystring operator-(const Mystring &);
	friend bool operator==(const Mystring &, const Mystring &);
	friend bool operator!=(const Mystring &, const Mystring &);
	friend	bool operator<(const Mystring &, const Mystring &);
	friend	bool operator>(const Mystring &, const Mystring &);
	friend	Mystring operator+(const Mystring &, const Mystring &);
	friend	Mystring operator+=(Mystring &, const Mystring &);
	friend	Mystring operator*(const Mystring &, const size_t);
	friend	Mystring operator*=(Mystring &, const size_t);
	friend	Mystring operator++(Mystring &);
	friend	Mystring operator++(Mystring &, int);
 
// END
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
/**
 * Member method style overloading
 */
 
//		Mystring operator-() const;
//		bool operator==(const Mystring);
//		bool operator!=(const Mystring);
//		bool operator<(const Mystring);
//		bool operator>(const Mystring);
//		Mystring operator+(const Mystring) const;
//		Mystring operator+=(const Mystring);
//		Mystring operator*(const size_t) const;
//		Mystring operator*=(const size_t);
//		Mystring operator++();
//		Mystring operator++(int);
//		
		
// END
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_