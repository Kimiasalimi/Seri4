#include "Address.h"
#include<iostream>
using namespace std;

    // Implementations of constructors for Address class
    Address::Address() : country(""), city(""), street("") {}

    Address::Address(string country, string city, string street) : country(country), city(city), street(street) {}

    // Implementation of input and output operators for Address class
    istream& operator>>(istream& in, Address& address) {
        cout << "Enter country: ";
        in >> address.country;
        cout << "Enter city: ";
        in >> address.city;

        cout << "Enter street: ";
        in >> address.street;
        return in;
    }

    ostream& operator<<(ostream& out, const Address& address) {
        out << "Country: " << address.country << endl;
        out << "City: " << address.city << endl;
        out << "Street: " << address.street << endl;
        return out;
    }

    // Implementations of setters and getters for country, city, and street values
    void Address::setCountry(string country) {
        this->country = country;
    }


    void Address::setCity(string city) {
        this->city = city;
    }

    void Address::setStreet(string street) {
        this->street = street;
    }

    string Address::getCountry() const {
        return country;
    }

    string Address::getCity() const {
        return city;
    }

    string Address::getStreet() const {
        return street;
    }

