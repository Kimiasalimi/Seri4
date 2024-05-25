#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <string>
#include "Address.h"

class Person {
private:
    string name;
    string id;
    Address address;

public:
    Person(){}
    Person(string name, string id, Address address);
    Person(const Person& other);

    bool validateId(const string& id) const;
    // Overloading the << operator
	friend ostream& operator<<(ostream& os, const Person& person);

	// Overloading the >> operator
	friend istream& operator>>(istream& is, Person& person);

};

#endif
