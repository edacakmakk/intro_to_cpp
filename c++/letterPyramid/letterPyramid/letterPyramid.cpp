#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char alph = 'A';
    int n, blk;
    int ctr = 1;
    cout << "\n\n Display the patern like pyramid using the alphabet: \n";
    cout << "---------------------------------------------------------\n";
    cout << "Input the number of letters (less than 26) in pyramid: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (blk = 1; blk <= n; blk++)
        {
            cout << " ";
        }
        for (j = 0; j <= (ctr / 2); j++)
        {
            cout << alph++ << " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++)
        {
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    }
}