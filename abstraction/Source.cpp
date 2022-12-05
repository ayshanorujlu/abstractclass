#include<iostream>
using namespace std;

class Hotel {
public:
	string nameHotel;
	int countRoom;
	double price;

	Hotel(string name, int count, double pr) {
		nameHotel = name;
		countRoom = count;
		price = pr;
	}
	virtual~Hotel() = 0 {
	}
};

class Fairmont :public Hotel {
public:
	Fairmont(string nameHotel, int countRoom, double price):Hotel(nameHotel,countRoom,price) {

	}
};

class Hilton :public Hotel {
public:
	Hilton(string nameHotel, int countRoom, double price) :Hotel(nameHotel, countRoom, price) {

	}
};

class ParkInn :public Hotel {
public:
	ParkInn(string nameHotel, int countRoom, double price) :Hotel(nameHotel, countRoom, price) {

	}
};

class Person {
public:
	void Stay(Hotel& obj) {
		cout << "I'm staying at a " << obj.nameHotel << endl;
	}
};

int main() {
	Person Ayshan;
	Person Nargiz;
	Fairmont fairmont("Flame Towers Hotel", 1235, 560);
	Hilton hilton("Hilton Hotel", 1000, 450);
	ParkInn parkinn("ParkInn Hotel", 900, 120);
	Nargiz.Stay(parkinn);
	Ayshan.Stay(hilton);
}