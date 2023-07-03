#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main()
{
    int i{ 5 };
    while (i > 0)
    {
        cout << i << endl; // 5 4 3 2 1 
        i--;
    }

    int x{ 100 }, y{ 200 };
    cout << "\nx: " << x << endl; //100
    cout << "y: " << y << endl; //200

    swap(&x, &y);

    cout << "\nx: " << x << endl; //200
    cout << "y: " << y << endl; //100
    cout << endl;
    return 0;


}

