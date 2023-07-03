/*
a simple and very old method of sending secret messages is the substitution ciper.
you might have used this cipher with your friends when you were a kid.
basically, each each letter of the alphabet gets replaced by another letter of the alphabet.
for example, every "a" ge replaced with an "X", and every "b" gets repleced with a "Z", etc.

write a program thats ask using the substitution cipher and display the encrypted message.
then decryped the encrypted message back to the original message.

you ay use the 2 string below for your subsition.
for example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

to decrypt you can replace the character at position n in key
with the character at position n in alphabet.

currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
this could also be improved.

resue exciting functionaly in libraries and in the std::string class
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet{ "abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPRSTUVWXYZ" };
    string key{ "QWERTYUIOPASDFGHJKLZXCVBNMzxcvbnmasdfghjkliouytrew" };

    string secret_message{};
    cout << "enter your message: " << endl;
    getline(cin, secret_message);

    string encrypted_message{};

    cout << "Encrypting message..." << endl;

    for (char c : secret_message)
    {
        size_t position = alphabet.find(c);
        if (position != string::npos)
        {
            char new_char{ key.at(position) };
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message += c;
        }
    }

    cout << "\nEncrypted message: " << encrypted_message << endl;

    string decrypted_message{};
    cout << "\nDecrypting message..." << endl;

    for (char c : encrypted_message)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {
            char new_char{ alphabet.at(position) };
            decrypted_message += new_char;
        }
        else
        {
            decrypted_message += c;
        }
    }

    cout << "\nDecrupted message: " << decrypted_message << endl;

    return 0;
}


