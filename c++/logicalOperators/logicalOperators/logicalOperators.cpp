/*
write a program that ask the user to enter the following:
an integer resresenting the number of cents.

you may assume that the number of cents entered is grater than or equal to zero

the program should then display how to provide that change to the user.

in the US:
    1 dollar is 100 cents.
    1 quarts is 25 cents
    1 dime is 10 cents
    1 nickel 5 cents
    1 penny is 1 cents.
*/

#include <iostream>
using namespace std;

int main()
{
    int dollar_value{ 100 };
    int quarts_value{ 25 };
    int dime_value{ 10 };
    int nickel_value{ 5 };
    int penny_value{ 1 };
    int money{};

    cout << "please entiring your money: " << endl;
    cin >> money;

    int equal{}, dollars{}, quarts{}, dime{}, nickel{}, penny{};

    dollars = money / dollar_value;
    equal = money - dollars * dollar_value;

    quarts = equal / quarts_value;
    equal -= quarts * quarts_value;

    dime = equal / dime_value;
    equal -= dime * dime_value;

    nickel = equal / nickel_value;
    equal -= nickel * nickel_value;

    penny = equal / penny_value;

    cout << "dollars: " << dollars << endl;
    cout << "quarts: " << quarts << endl;
    cout << "dime: " << dime << endl;
    cout << "nickel: " << nickel << endl;
    cout << "penny: " << penny << endl;


    return 0;
}

/* another solution

equal = dollars = quarters = dime = nickel = pennies = 0;

dollar = money / dollar_value;
equal = money % dollar_value;

quarters = equal / quarter_value;
equal %= quarter_value;

dime = equal / dime_value;
equal %= dime_value;

nickel = equal / nickel_value;
equal %= nickel_value;

pennies = equal;

*/