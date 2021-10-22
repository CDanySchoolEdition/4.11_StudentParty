//4.11.	Class Exercise. Manage app for Student Party

#include <iostream>
using namespace std;

//1.	Define party location. Pass data by constructor, setter or by direct read
class Location
{
private:
	string street;
	int    streetNumber;
public:
	Location(string street = "unknown", int streetNumber = 0)
	{
		this->street = street;
		this->streetNumber = streetNumber;
	}

	void setStreet(string street)
	{
		this->street = street;
	}

	string getStreet()
	{
		return this->street;
	}

	void setStreetNumber(int streetNumber)
	{
		this->streetNumber = streetNumber;
	}

	int getStreetNumber()
	{
		return this->streetNumber;
	}

	void test()
	{
		cout << "Street: " << this->street << endl;
		cout << "Nr: " << this->streetNumber << endl;
	}
};

class Party
{
private:
	Location* location;

public:
	Party(Location* location)
	{
		this->location = location;
	}

	void setLocation(Location* location)
	{
		this->location = location;
	}

	Location* getLocation()
	{
		return this->location;
	}


};

int main()
{
	Location* location;
	location = new Location();
	Location* location1 = new Location("Mircesti", 11);
	//location1->test();

	//cout << endl;
	location->setStreet("Spania");
	location->setStreetNumber(423);
	//location->test();

	Party* party;
	party = new Party(location1);
	party->getLocation()->test();

	cout << endl;
	party->setLocation(location);
	party->getLocation()->test();

	cout << endl;
	Location* partyLocation = party->getLocation();
	cout << partyLocation->getStreet() << endl;

	party->getLocation()->setStreetNumber(10);
	cout << endl;
	party->getLocation()->test();
}
