// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
		
		string message {};
		string encrypted_message {};
		string decrypted_message {};
		
		cout << "Enter your secret message (press ENTER to submit): " << endl;
		getline(cin, message);
		cout << "Encrypting message..." << endl;
		
		
		for(auto letter: message) {
			if (!isalpha(letter)) {
				encrypted_message += letter;
			} else {
			char c_letter = key.at(alphabet.find(letter));
			encrypted_message += c_letter;
			}
		}
		
		
		cout << "Encrypted message: " << endl;
		cout << encrypted_message << endl;

		cout << "Decrypting message..." << endl;
		for(auto letter: encrypted_message) {
			if (!isalpha(letter)) {
				decrypted_message += letter;
			} else {
			char c_letter = alphabet.at(key.find(letter));
			decrypted_message += c_letter;
			}
		}
		
		
		cout << "Decrypted message: " << endl;
		cout << decrypted_message << endl;
		
		
    
    
    cout << endl;
    return 0;
}

