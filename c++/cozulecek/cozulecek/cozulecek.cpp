#include <iostream>
#include <vector>

using namespace std;

char get_selection();

void section_p(const vector <int>& v);
void section_a(vector <int>& v);
void section_m(const vector <int>& v);
void section_s(const vector <int>& v);
void section_l(const vector <int>& v);
void section_q();
void unknown();


int main()
{
    char datam{};
    vector <int> numbers;

    do {
        cout << "P - Print numbers\nA - add a number\nM - display mean of the numbers\nS - display the smallest numbers\nL - display the largest numbers\nQ - quit" << endl;
        cout << "Please enter your choice: ";
        datam = get_selection();

        switch (datam)
        {
        case 'P':
            section_p(numbers);
            break;
        case 'A':
            section_a(numbers);
            break;
        case 'M':
            section_m(numbers);
            break;
        case 'S':
            section_s(numbers);
            break;
        case 'L':
            section_l(numbers);
            break;
        case 'Q':
            section_q();
            break;
        default:
            unknown();
        }
    } while (datam != 'Q');

    cout << endl;
    return 0;
}


void section_p(const vector <int>& v)
{
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
        for (auto num : v)
            cout << num << ", ";
}

char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void section_a(vector <int>& v)
{
    int number_add{};
    cout << "Enter an integer to at to the list: ";
    cin >> number_add;
    v.push_back(number_add);
    cout << number_add << " added" << endl;
}

void section_m(const vector <int>& v)
{
    if (v.size() == 0)
        cout << "Unable the calculate to mean - no data" << endl;
    else {
        int total{};
        for (auto num : v) {
            total += num;
        }
        cout << "Avarage is: " << static_cast <double> (total) / v.size() << endl;
    }
}

void section_s(const vector <int>& v)
{
    if (v.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else {
        int smallest = v.at(0);
        for (const auto& num : v)
            if (num < smallest)
                smallest = num;
        cout << "The smallest number is: " << smallest << endl;
    }

}

void section_l(const vector <int>& v)

{
    if (v.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else {

        int largest = v.at(0);
        for (auto num : v)
            if (num > largest)
                largest = num;
        cout << "The largest number is: " << largest << endl;
    }
}

void selection_q()
{
    cout << "Goodbye" << endl;

}

void unknown()
{
    cout << "Unknown selection, please try again!" << endl;
}