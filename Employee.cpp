#include "employee.h"
#include<iostream>
using namespace std;

Employee::Employee(const string& name, const string& id, const Address& address)
    : name(name), id(id), address(address), hourWork(0), salaryPerHour(0), workToDo(0), workDone(0) {}

Employee::Employee(const Employee& other)
    : name(other.name), id(other.id), address(other.address), hourWork(other.hourWork), salaryPerHour(other.salaryPerHour), workToDo(other.workToDo), workDone(other.workDone) {}

ostream& operator<<(ostream& os, const Employee& employee) {
    os << "Name: " << employee.name << ",ID: " << employee.id << ", Address: " << employee.address << ", Hours Worked: " << employee.hourWork
       << ", Salary Per Hour: " << employee.salaryPerHour << ", Work To Do: " << employee.workToDo << ", Work Done: " << employee.workDone;
    return os;
}

istream& operator>>(istream& is, Employee& employee) {
    is >> employee.name >> employee.id >> employee.address >> employee.hourWork >> employee.salaryPerHour >> employee.workToDo >> employee.workDone;
    return is;
}

Employee& Employee::operator=(const 

Employee& other) {
    if (this != &other) {
        name = other.name;
        id = other.id;
        address = other.address;
        hourWork = other.hourWork;
        salaryPerHour = other.salaryPerHour;
        workToDo = other.workToDo;
        workDone = other.workDone;
    }
    return *this;
}

void Employee::setHourWork(int hours) {
    hourWork = hours;
}

int Employee::getHourWork() const {
    return hourWork;
}

void Employee::setSalaryPerHour(int salary) {
    salaryPerHour = salary;
}

int Employee::getSalaryPerHour() const {
    return salaryPerHour;
}

void Employee::setWorkToDo(int work) {
    workToDo = work;
}

int Employee::getWorkToDo() const {
    return workToDo;
}

void Employee::setWorkDone(int work) {
    workDone = work;
}

int Employee::getWorkDone() const {
    return workDone;
}

void Employee::calculateSalary() {
    double percentage = static_cast<double>(workDone) / workToDo;
    salaryPerHour *= percentage;
}

double Employee::efficiency() const {
    if (hourWork == 0) {
        return 0.0; // to avoid division by zero
    }
    return static_cast<double>(workDone) / hourWork * 100.0;
}
