#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "address.h"
using namespace std;

class Employee {
private:
    string name;
    string id;
    Address address;
    int hourWork;
    int salaryPerHour;
    int workToDo;
    int workDone;

public:
    Employee(){}
    Employee(const string& name, const string& id, const Address& address);

    Employee(const Employee& other);

    friend ostream& operator<<(ostream& os, const Employee& employee);
    friend istream& operator>>(istream& is, Employee& employee);

    Employee& operator=(const Employee& other);

    void setHourWork(int hours);
    int getHourWork() const;

    void setSalaryPerHour(int salary);
    int getSalaryPerHour() const;

    void setWorkToDo(int work);
    int getWorkToDo() const;

    void setWorkDone(int work);
    int getWorkDone() const;

    void calculateSalary();
    double efficiency() const;
};

#endif

