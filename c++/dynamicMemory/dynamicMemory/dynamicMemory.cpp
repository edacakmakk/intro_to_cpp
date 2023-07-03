#include <iostream>

using namespace std;

int main()
{
    int* int_ptr{ nullptr };

    int_ptr = new int;

    cout << int_ptr << endl; //0x7115a0
    delete int_ptr;


    size_t size{ 0 };
    double* temp_ptr{ nullptr };

    cout << temp_ptr << endl;

    cout << "How many temps? ";
    cin >> size; //ne kadar değer girerlerse belekte o kadar yer ayıracağız. 

    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    delete[] temp_ptr;

    // bu konuyu tam anlamadım


    return 0;

}
