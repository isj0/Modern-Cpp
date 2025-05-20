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
#include <vector>

using namespace  std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string message {};
    string encrypted {};
    string decrypted {};

    // vector to store positions of each character
    vector<int> pos {};
    vector<int> pos2 {};

    cout << "Please enter a message to encrypt: ";
    cin >> message;

    // Iterate through the alphabet string to extrac the corresponding positions of characters
    for (int i = 0; i < message.length(); ++i) {
        for (int j = 0; j < alphabet.length(); ++j) {
            if (message[i] == alphabet[j]) {
                pos.push_back(j);
            }
        }
    }

    // Now encrpyt the message
    for (int i = 0; i < pos.size(); ++i) {
        for (int j = 0; j < key.length(); ++j) {
            if (pos[i] == j) {
                encrypted += key.at(j);
            }
        }
    }
    cout << "Encrypted message: " << encrypted << endl;

    // Now lets Decrypt the message

    // Iterate through the alphabet string to extrac the corresponding positions of characters
    for (int i = 0; i < encrypted.length(); ++i) {
        for (int j = 0; j < key.length(); ++j) {
            if (encrypted[i] == key[j]) {
                pos2.push_back(j);
            }
        }
    }
    // Now encrpyt the message
    for (int i = 0; i < pos2.size(); ++i) {
        for (int j = 0; j < alphabet.length(); ++j) {
            if (pos2[i] == j) {
                decrypted += alphabet.at(j);
            }
        }
    }

    cout << "Decrypted message: " << decrypted << endl;

    cout << endl;
    return 0;
}

