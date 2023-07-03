#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;
public:
	//Overloading Constructiors
	Player();                                                                              //bu ikisini ortadan kaldırıp üçünçüsüne örnekteki şeyi uygularsak
	Player(string name_val);                                                               // yine de verilen kod çalışır. bu şekilde sade, basit kod yazmış oluruz
	Player(string name_val, int health_val, int xp_val); // Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player()
	:name{ "None" }, health{ 0 }, xp{ 0 } { //:Player{"None",0,0} is the same              //  
	cout << "No-args contructor" << endl;                                                  // 
}                                                                                          //
                                                                                           //tüm bu satırları ortadan kaldırarak sadece
Player::Player(string name_val)                                                            //üçünçü parametre ile de aynı şeyleri elde edebiliriz.
	:name{ name_val }, health{ 0 }, xp{ 0 } { //:Player{name_val,0,0} is the same          //
	cout << "One-arg contructor" << endl;                                                  //
}                                                                                          //


Player::Player(string name_val, int health_val, int xp_val)
	:name{ name_val }, health{ health_val }, xp{ xp_val } { //:Player{name_val,health_val,xp_val} is the same
	cout << "Three-args contructor" << endl;
}


int main() {
	Player empty;
	Player frank{ "Frank" };
	Player hero{ "Hero", 100 };
	Player villian{ "Villian", 100, 55 };

	return 0;
}

/*
***********KODUN BASİTLEŞTİRİLMİŞ HALİ******************
.
.
.
.
public:
	Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player(string name_val, int health_val, int xp_val)
	:Player{name_val,health_val,xp_val} {
	cout << "Three-args contructor" << endl;
}
.
.
.
.NOTE: Her zaman kullanışlı değildir!
*/