//2. Add a Trust account class to the Account hierarchy
//    A Trust account has a name, a balance, and an interest rate
//    The Trust account deposit works just like a savings account deposit.
//    However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
//    
//    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
//    You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)

//1. Add a Checking account class to the Account hierarchy
//    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
//    Every withdrawal transaction will be assessed this flat fee.

#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account: public Savings_Account {
	friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
	static constexpr char *def_name = "Unamed Savings Account";
	static constexpr double def_balance = 2000.0;
	static constexpr double def_interest_rate = 1.50;
	static constexpr double def_bonus = 50.0;
protected:
	double bonus;
public:
	size_t withdraw_count;
	Trust_Account(std::string name = def_name, double balance = def_balance, double interest_rate = def_interest_rate, double bonus = def_bonus);
	bool deposit(double deposit_ammount);
	bool withdraw(double deposit_ammount);
}; 

#endif