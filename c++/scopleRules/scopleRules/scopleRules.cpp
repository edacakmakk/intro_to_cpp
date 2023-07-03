#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num{ 300 }; //global variable declared outside any classes or function

void global_example()
{
    cout << "\nglobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "\nglobal num is: " << num << " in global_example - end" << endl;
}

void local_example(int x)
{
    int num{ 1000 };
    cout << "\nlocal num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
}

void static_local_example()
{
    static int num{ 5000 }; //local to static_local_example static - retains it value between calls
    cout << "\nlocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "\nlocal static num is: " << num << " in static_local_example - start" << endl;
}

int main()
{
    int num{ 100 };//local to main
    int num1{ 500 }; // local to main

    cout << "local num is: " << num << " in main" << endl;

    { // crates a new level of scope
        int num{ 200 };
        cout << "local num is: " << num << " in inner block in main" << endl;
        cout << "inner block in main can see out - num1 is: " << num1 << endl;
    }

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();

}