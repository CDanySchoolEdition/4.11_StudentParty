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
  
};

int main()
{
	Party* party;
	party = new Party();
	Location* location;
	location = new Location();
	Location* location1 = new Location("Mircesti", 11);
	location1->test();

	cout << endl;
	location->setStreet("Spania");
	location->setStreetNumber(423);
	location->test();
}
