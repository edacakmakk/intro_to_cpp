#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	std::string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }
	Player(std::string name_val = "None", int helath_val = 0, int xp_val = 0);
	//Copy constructor
	Player(const Player& source);
	//Destructor
	~Player() { cout << "Destructor called for: " << name << endl; }
};

                                                                                        
Player::Player(std::string name_val, int health_val, int xp_val)
	:name{ name_val }, health{ health_val }, xp{ xp_val } { //:Player{name_val,health_val,xp_val} is the same
	cout << "Three-args contructor" << endl;
}

Player::Player(const Player& source) // yapıyı kopyalıyoruz &source
	//:name(source.name), health(source.health), xp(source.xp) {
	:Player{ source.name, source.health, source.xp } {
	cout << "Copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "Xp: " << p.get_xp() << endl;
}


int main() {
	Player empty{ "XXXXXX", 100, 50 }; // XXXXXXX, 100, 50

	Player my_new_object{ empty }; //kopyalama işlemi XXXXXXX, 100, 50

	display_player(empty);

	Player frank{ "Frank" };
	Player hero{ "Hero", 100 };
	Player villian{ "Villian", 100, 55 };

	return 0;
}