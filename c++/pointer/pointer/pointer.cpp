#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int* p;
    cout << "Value of p is: " << p << endl; // 0x4017cb - garbage
    cout << "Address of p is: " << &p << endl; // 0x61febc
    cout << "sizeof of p is: " << sizeof p << endl; // 4

    p = nullptr; // set p to point nowhere
    cout << "Value of p is: " << p << endl; // 0

    int scoree{ 10 };
    double high_tempp{ 100.1 };

    int* score_ptrr{ nullptr };

    score_ptrr = &scoree;
    cout << "Value of score is: " << scoree << endl; //10
    cout << "address of score is: " << &scoree << endl; //0x61feac
    cout << "Value of score_ptr is: " << score_ptrr << endl; //0x61feac

    //score_ptrr = &high_tempp; // compiler error. because score_ptr is integer but high_temp is double. different type

    int score{ 100 };
    int* score_ptr{ &score };

    cout << *score_ptr << endl; //100

    *score_ptr = 200;

    cout << *score_ptr << endl; //200
    cout << score << endl; //200


    double high_temp{ 100.7 };
    double low_temp{ 37.4 };
    double* temp_ptr{ &high_temp };

    cout << *temp_ptr << endl; //100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl; //37.4


    string name{ "Frank" };
    string* string_ptr{ &name };

    cout << *string_ptr << endl; //Frank
    name = "James";
    cout << *string_ptr << endl; //James


    vector <string> stooges{ "Larry", "Moe", "Curly" };
    vector <string>* vector_ptr{ nullptr };

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl; //Lary

    cout << "Stogees: ";
    for (auto stooge : *vector_ptr)
        cout << stooge << " ";
    cout << endl;


    return 0;
}