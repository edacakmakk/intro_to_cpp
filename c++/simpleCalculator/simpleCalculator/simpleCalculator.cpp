#include <iostream>
#include <vector>

using namespace std;


int Main()
{
    char selection{};
    vector <int> numbers{};


    int number_add{};

    do
    {
        cout << "P - Print numbers\nA - add a number\nM - display mean of the numbers\nS - display the smallest numbers\nL - display the largest numbers\nQ - quit" << endl;

        cout << "Enter your selection: ";
        cin >> selection;

        switch (selection)
        {
        case 'P':
        case 'p':
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else
                cout << "[";
            for (auto num : numbers)
                cout << num << ", ";
            cout << "]" << endl;
            break;
        case 'A':
        case 'a':
            // number_add = 0;
            cout << "Enter an integer to at to the list: ";
            cin >> number_add;
            numbers.push_back(number_add);
            cout << number_add << " added" << endl;
            break;
        case 'M':
        case 'm':
        {
            //ortalama hesab�
            if (numbers.size() == 0)
                cout << "Unable the calculate to mean - no data" << endl;
            else {
                int total{};
                for (auto num : numbers) {
                    total += num;
                }
                cout << "Avarage is: " << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        break;
        case 'S':
        case 's':
            if (numbers.size() == 0)
                cout << "Unable to determine the largest number - list is empty" << endl;
            else {
                int smallest = INT_MAX;
                for (const auto& num : numbers)
                    if (num < smallest)
                        smallest = num;

                std::cout << "The smallest number is: " << smallest << std::endl;
            }
            break;
        case 'L':
        case 'l':
            if (numbers.size() == 0)
                cout << "Unable to determine the largest number - list is empty" << endl;
            else {

                int largest = INT_MIN;
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                std::cout << "The largest number is: " << largest << std::endl;
            }
            break;
        case 'Q':
        case 'q':
            cout << "Goodbye" << endl;
            break;
        default:
            cout << "Unknown selection, please try again!" << endl;
        }
    } while (selection != 'q' && selection != 'Q');


    return 0;
}





