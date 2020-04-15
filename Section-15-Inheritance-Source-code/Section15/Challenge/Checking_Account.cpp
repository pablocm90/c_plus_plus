//1. Add a Checking account class to the Account hierarchy
//    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
//    Every withdrawal transaction will be assessed this flat fee.

#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee)
		: Account {name, balance}, fee{fee} {};
		
bool Checking_Account::withdraw(double withdraw_ammount) {
	double total_ammount = withdraw_ammount + fee;
	return Account::withdraw(total_ammount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
	os << "Checking Account: " << account.name << " Balance: " << account.balance << " Fee: " << account.fee;
	return os;
}