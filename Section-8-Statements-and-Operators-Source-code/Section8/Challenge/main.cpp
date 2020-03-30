// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		2 euros is 200 cents
		1 euro is 100 cents
		1 50 cent is 50 cents
		1 20 cent is 20 cents
		1 10 cent is 10 cents
		1 5  cent is 5 cents
		1 2  cent is 5 cents, and
		1 1  cent is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	2 euros    : 0
	1 euro 		 : 3
	50 cents   : 1
	20 cents   : 1
	10 cents   : 2
	5 cents  	 : 2
	2 cents  	 : 2
	1 cents  	 : 2
	
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
	cout << "What change to give ? (in cents)" << endl;
	int total_monies {0};
	cin >> total_monies;
	
	
	cout << "You can provide the change as follows: " << endl;
	cout << "2 euro: " << total_monies / 200 << endl;
	total_monies %= 200;
	cout << "1 euro: " << total_monies / 100 << endl;
	total_monies %= 100;
	cout << "50 cents: " << total_monies / 50 << endl;
	total_monies %= 50;
	cout << "20 cents: " << total_monies / 20 << endl;
	total_monies %= 20;
	cout << "10 cents: " << total_monies / 10 << endl;
	total_monies %= 10;
	cout << "5 cents: " << total_monies / 5 << endl;
	total_monies %= 5;
	cout << "2 cents: " << total_monies / 2 << endl;
	total_monies %= 2;
	cout << "1 cents: " << total_monies / 1 << endl;
	
	cout << endl;
	return 0;
}


