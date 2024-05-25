#include "person.h"
#include<iostream>
using namespace std;

Person::Person( string name, string id,  Address address)
    : name(name), id(id), address(address) {
    if (!validateId(id)) {
        cout << "id invalid" <<endl;
        exit(1);
    }
}

Person::Person(const Person& other)
    : name(other.name), id(other.id), address(other.address) {}

bool Person::validateId(const string& id) const {
    // validate the id based on the given conditions
    if (id.length() < 8 || id.length() > 10) {

        return false;
    }

    string yearStr = id.substr(0, 2);
    int year = stoi(yearStr);
    if (year < 84 || year > 99) {
        return false;
    }

    string numberStr = id.substr(2);
    int number = stoi(numberStr);
    if (number < 4 || number > 6) {
        return false;
    }

    return true;
}
// Overloading the << operator
ostream& operator<<(ostream& os, const Person& person) {
	os <<", ID: " << person.id << ", Address: " << person.address;
	return os;
}

// Overloading the >> operator
istream& operator>>(istream& is, Person& person) {
	is >> person.name >> person.id >> person.address;
	return is;
}
