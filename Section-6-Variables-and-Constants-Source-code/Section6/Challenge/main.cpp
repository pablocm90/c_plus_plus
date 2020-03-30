
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	const double sales_tax {0.06};
	const short small_room_price {25};
	const short large_room_price {35};
	const short period {30};
	
	cout <<	"How many small rooms would you like to clean? " << endl;
	short small_room_count {0};
	cin >> small_room_count;
	cout << endl;
	
    cout <<	"How many large rooms would you like to clean? " << endl;
	short large_room_count {0};
	cin >> large_room_count;
    cout << endl;
	
	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << small_room_count << endl;
	cout << "number of large rooms: " << large_room_count << endl;
	cout << "Price per small room: " << small_room_price << endl;
	cout << "Price per large room: " << large_room_price << endl;
	int small_room_cost { small_room_price * small_room_count };
	int large_room_cost { large_room_price * large_room_count };
	int total_cost { small_room_cost + large_room_cost };
	cout << "Cost: " << total_cost << endl;
	cout << "Tax: " << sales_tax  << endl;
	cout << "==========================================" << endl;
	double total_tax { total_cost * sales_tax};
	double total_after_tax { total_cost + total_tax };
	cout << "Total estimate: " << total_after_tax << endl;
	cout << "This estimate is valid for " << period << " days" << endl;
    return 0;
}

