#include <iostream>

using namespace std;

int main()
{
    int small_room;
    int large_room;
    int price_small_room{ 25 };
    int price_large_room{ 35 };
    cout << "Welcome to the hotel" << endl;
    cout << "$25 per small room\n$35 per large room\nHow many do you want to small room?" << endl;
    cin >> small_room;
    cout << "How many do you want to large room?" << endl;
    cin >> large_room;
    cout << "sales tax rate is 6%\nEstimate are valid for 30 days." << endl;

    cout << "Price per small room: " << small_room * price_small_room << endl;
    cout << "Price per large room: " << large_room * price_large_room << endl;
    cout << "Cost: " << small_room * price_small_room + large_room * price_large_room << endl;
    cout << "Tax: " << (small_room * price_small_room) * 6 / 100 + (large_room * price_large_room) * 6 / 100 << endl;

    cout << "Total estimate: " << small_room * price_small_room + large_room * price_large_room + (small_room * price_small_room) * 6 / 100 + (large_room * price_large_room) * 6 / 100 << endl;
    cout << "This estimate is valid for 30 days.";

    return 0;

}

/*

#include <iostrean>

using namespace std;

it main()
{
    cout << "Hello, welcome to the hotel" << endl;

    int small_rooms {0};
    cout << "\nHow many small rooms would you like to stay?: ";
    cin >> small_rooms;

    int large_rooms {0};
    cout << "\nHow many large rooms would you like to stay?: ";
    cin >> large_rooms;

    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};

    const double salex_tax {0.06};
    const int estimate_expiry {30}; //days

    cout << "\nNumber of small rooms: " << small_rooms << endl;
    cout << "\nNumber of large rooms: " << large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    cout << "Cost: $"

        gerisi benim yaptığım hesaplamanın aynısı yazmaya çok üşendim şu an belim ağrıyooooooorr.

    return 0;

}
*/