#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string name, double balance, double interest_rate, double bonus)
	: Savings_Account {name, balance, interest_rate}, bonus{bonus}, withdraw_count{0} {};

bool Trust_Account::deposit(double deposit_ammount) {
	if(deposit_ammount >= 5000.00) {
		return Savings_Account::deposit(deposit_ammount + 50.00);
	} else {
		return Savings_Account::deposit(deposit_ammount);
	};
}

bool Trust_Account::withdraw(double withdraw_ammount) {
	std::cout << withdraw_count << std::endl;
	if (withdraw_count > 3) {
		std::cout << "too much!" << std::endl;
		return false;
	} else {
		++withdraw_count;
		return Account::withdraw(withdraw_ammount);
	}
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
	os << 
	"[Trust_Account: " << 
	account.name << ": " << 
	account.balance << ", " << 
	account.int_rate << ", " << 
	account.bonus << ", " << 
	account.withdraw_count << "]";
	return os;
}