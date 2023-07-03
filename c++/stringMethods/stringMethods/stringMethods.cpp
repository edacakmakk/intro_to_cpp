#include <string.h>

using namespace std,

string s1; // empty
string s2{ "frank" }; // frank
string s3{ s2 }; // frank
string s4{ "frank", 3 }; // fra
string s5{ s3, 0, 2 }; //fr
string s6(3, 'x') //xxx
---------------- -
string s1;
s1 = "c++ racks!";

string s2{ "hello" };
s2 = s1;
------------------

string part1{ "c++" };
string part2{ "is a powerful" };

string sentece;
sentence = part1 + " " + part2 + "language";
// c++ is a powerful language
sentence = "c++" + "is powerful"; // illegal

---------------------------------- -

string s1;
string s2{ "farnk" };

cout << s2[0] << endl; //f
cout << s2.at(0) << endl; //f

s2[0] = 'F'; //Frank
s2.at(0) = 'p'; //prank

-------------------------- -

string s1{ "frank" };

for (char c : s1)
cout << c << endl;
//f
//r
//a
//n
//k

---------------------------- -

string s1{ "frank" };

for (int c : s1)
cout << c << endl;
//70   f
//114  r
//97   a
//110  n
//107  k

------------------------------

string s1{ "Apple" };
string s2{ "Banana" };
string s3{ "Kiwi" };
string s4{ "apple" };
string s5{ "s1" };

s1 == s5 //true
s1 == s2 //false
s1 != s2 //true
s1 < s2 //true ?
    s2 > s1 //true ?
    s4 < s5 //false
    s1 == "Apple"; //true

---------------------- -

//object.substr(start_index, lengt)

string s1{ "this is a test" };

cout << s1.sunstr(0, 4); //this
cout << s1.sunstr(5, 2); //is
cout << s1.sunstr(10, 4); //test

------------------------------ -

//object.find(search_string)

string s1{ "this is a test" };
cout << s1.find("this"); //0
cout << s1.find("is"); //2
cout << s1.find("test"); //10
cout << s1.find('e'); //11
cout << s1.find("is", 4; //0
cout << s1.find("xx"); //string::npos

---------------------------------- -

//object.erase(start_index, length)

string s1{ "this is a test" };

cout << s1.erase(0, 5); //is a test
cout << s1.erase(5, 4); //is a
s1.clear(); //empies string s1

----------------------------------

string s1{ "frank" };

cout << s1.length() << endl; //5

s1 += "james";
cout << s1 << endl; //frank james

------------------------------

string s1;
cin >> s1;  //hello there
cout << s1 << endl; //hello (only accepts up to the first space)

getline(cin, s1); // read entire line until  \n
cout << s1 << endl; // hello there

getline(cin, s1, 'x'); //this isx
cout << s1 << endl; //this is
