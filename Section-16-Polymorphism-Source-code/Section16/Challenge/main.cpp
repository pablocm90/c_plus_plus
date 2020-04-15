// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   
		// Savings 
		
		Account *deflt = new Savings_Account();
		Account *superman = new Savings_Account("Superman");
		Account *batman = new Savings_Account("Batman", 2000);
		Account *wonder_woman = new Savings_Account("Wonder Woman", 5000, 5.0);

    vector<Account *> sav_accounts {deflt, superman, batman, wonder_woman};
		
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
//   
//   // Checking
//   
		Account *def_checking = new Checking_Account();
		Account *kirk = new Checking_Account("Kirk");
		Account *spock = new Checking_Account("Spock");
		Account *bones = new Checking_Account("Bones");
		
//    vector<Checking_Account> check_accounts;
    sav_accounts.push_back(def_checking);
    sav_accounts.push_back(kirk);
    sav_accounts.push_back(spock);
    sav_accounts.push_back(bones);

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
//
//    // Trust

		Account *def_trust = new Trust_Account();
		Account *athos = new Trust_Account("Athos", 10000, 5.0);
		Account *porthos = new Trust_Account("Porthos", 20000, 4.0);
		Account *aramis = new Trust_Account("Aramis", 30000);
//  
//    vector<Trust_Account> trust_accounts;
    sav_accounts.push_back(def_trust);
    sav_accounts.push_back(athos);
    sav_accounts.push_back(porthos);
    sav_accounts.push_back(aramis);
//
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(sav_accounts, 1000);
//    

    
    return 0;
}

