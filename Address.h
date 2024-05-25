#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>
using namespace std;

    class Address {
    private:
        string country;
        string city;
        string street;

    public:
        // Constructors for Address class
        Address();
        Address(string country, string city, string street);

      // Overloaded input and output operators for Address class

        friend istream& operator>>(istream& in, Address& address);
        friend ostream& operator<<(ostream& out, const Address& address);

        // Setters and getters for country, city, and street values
        void setCountry(string country);
        void setCity(string city);
        void setStreet(string street);

        string getCountry() const;
        string getCity() const;
        string getStreet() const;
    };

#endif

