//4.11.	Class Exercise. Manage app for Student Party

#include <iostream>
#include <list>
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

class Student
{
private:
	string name;
	int    year;
public:
	Student(string name = "unknown", int year = 0)
	{
		this->name = name;
		this->year = year;
	}

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return this->name;
	}

	int getYear()
	{
		return this->year;
	}
};

class Helpers
{
public:
	static void showStudents(list<Student*> students)
	{
		for (auto &student : students)
		{
			cout << student->getName() << "  " << student->getYear() << endl;
		}
	}
};

class Party
{
private:
	Location* location;
	list<Student*> students;

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

	void addStudent(Student* student)
	{
		this->students.push_back(student);
	}

	list<Student*> getStudents()
	{
		return this->students;
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

	Student* st1;
	Student* st2;
	st1 = new Student("Andrei", 2);
	st2 = new Student();
	party->addStudent(st1);
	party->addStudent(st2);

	cout << endl << "Students to party" << endl;
	Helpers::showStudents(party->getStudents());
}
