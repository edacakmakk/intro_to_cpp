#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_selection();

void handle_display(const vector <int>& v);
void handle_add(vector <int>& v);
void handle_mean(const vector <int>& v);
void handle_smallest(const vector <int>& v);
void handle_largest(const vector <int>& v);
void handle_find(const vector <int>& v);
void handle_quit();
void handle_unknown();

void display_list(const vector <int>& v);
double calculate_mean(const vector <int>& v);
int get_smallest(const vector <int>& v);
int get_largest(const vector <int>& v);
bool find(const vector <int>& v, int target);

int main()
{

    vector <int> numbers;
    char selection{};

    do
    {
        display_menu();
        selection = get_selection();
        switch (selection)
        {
        case 'P':
            handle_display(numbers);
            break;
        case 'A':
            handle_add(numbers);
            break;
        case 'M':
            handle_mean(numbers);
            break;
        case 'S':
            handle_smallest(numbers);
            break;
        case 'L':
            handle_largest(numbers);
            break;
        case 'F':
            handle_find(numbers);
            break;
        case 'Q':
            handle_quit();
            break;
        default:
            handle_unknown();
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

void display_menu()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest numbers" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void handle_display(const vector <int>& v)
{
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
        display_list(v);
}

void handle_add(vector <int>& v)
{
    int num_to_add{};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

/*
This function is called when the user selects calculate the mean
from the main menu
Note that the parameter is a const referance parameter
this function should NOT modify thi list of numbers
*/
void handle_mean(const vector <int>& v)
{
    if (v.size() == 0)
        cout << "Unable to calculate mean - list is empty" << endl;
    else
        cout << "The mean is " << calculate_mean(v) << endl;
}

void handle_find(const vector <int>& v)
{
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if (find(v, target))
        cout << target << " was found" << endl;
    else
        cout << target << " was not found" << endl;
}

void handle_largest(const vector <int>& v)
{
    cout << get_largest(v);
}

void handle_smallest(const vector <int>& v)
{
    cout << get_smallest(v);
}

void handle_quit()
{
    cout << "Goodbye" << endl;
}

void handle_unknown()
{
    cout << "Unknown selection - try again" << endl;
}

void display_list(const vector <int>& v)
{
    cout << "[ ";
    for (auto num : v)
        cout << num << " ";
    cout << "]" << endl;
}

/*
this function excepts a list of integer as a vector
and returns the calculated mean
Note that the parameter is a const referance parrameter
this function should NOT modify the list of numbers
Note: the list must not be empty
*/
double calculate_mean(const vector <int>& v)
{
    int total{};
    for (auto num : v)
        total += num;
    return static_cast <double> (total) / v.size();
}

/*
this function excepst a list of integers as a vector
and returns the largest integer in the list
Note that the parameter in a cont referance parameter
this fonction should NOT modify the list of numbers
Note: the list must be empty
*/

int get_largest(const vector <int>& v)
{
    int largest = v.at(0);
    for (auto num : v)
        if (num > largest)
            largest = num;
    return largest;
}

int get_smallest(const vector <int>& v)
{
    int smallest = v.at(0);
    for (auto num : v)
        if (num < smallest)
            smallest = num;
    return smallest;
}

bool find(const vector <int>& v, int target)
{
    for (auto num : v)
        if (num == target)
            return true;
    return false;
}