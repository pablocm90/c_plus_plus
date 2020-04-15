#include "I_Printable.h"


std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
	obj.print(os);
	return os;
};

void print(const I_Printable &obj) {
	std::cout << obj << std::endl;
}