#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "Please enter the witdth of the room: ";
	int room_width {0};
	cin >> room_width;
	
	cout << "Please enter the length of the room: ";
	int room_length {0};
	cin >> room_length;
	
	cout << "The area odf the room is : " << room_width * room_length << " m2" << endl;
	
	return 0;
}