// Fibonacci
/*
#include <iostream>

using namespace std;
unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if(n <= 1)
        return n;   // bases case
    return fibonacci(n-1) + fibonacci(n-2); //recusion
}

int main()
{
    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    return 0;
}
*/

//Factorial

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;   // bases case
    return n * factorial(n - 1); //recusion
}

int main()
{
    cout << factorial(5) << endl;
    cout << factorial(8) << endl;
    cout << factorial(16) << endl;
    return 0;
}