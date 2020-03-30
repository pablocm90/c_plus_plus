#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main() {
	cout << "Hello! and welcome to 'Pyramids!' please enter some characters (ENTER to submit)" << endl;
	
	string user_string {};
	getline(cin, user_string);
	
	if (user_string.size() % 2 == 0)
						user_string.append(".");
						
	size_t print_at {user_string.size()};
	
	string print_string {};
	string reversed_print_string {};
	
	for(auto character: user_string) {
		string spaces (print_at, ' ');
		string letter (1, character);
		cout << spaces << print_string << letter << reversed_print_string << endl;
		print_string.append(letter);
		reversed_print_string.insert(0, letter);
		print_at--;
	}
	
	return 0;
}