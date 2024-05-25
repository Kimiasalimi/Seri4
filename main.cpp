#include "Address.h"
#include "Person.h"
#include "Employee.h"
#include "Point.h"
#include "Rectangle.h"
#include<iostream>
using namespace std;
int main(){

    string name, id, country, city, street;
	int hourWork, salaryPerHour, workToDo, workDone;

	cout << "Enter person's ID: ";
	cin >> id;

	cout << "Enter person's address details:" << std::endl;
	cout << "Country: ";
	cin >> country;

	cout << "City: ";
	cin >> city;

	cout << "Street: ";
	cin >> street;

	Address addr(country, city, street);
	Person person(name, id, addr);

	cout << "Person info: " << person << std::endl;
	cout << "Enter the name: ";
	cin >> name;

	cout << "Enter the ID: ";
    cin >> id;

	cout << "Enter the address: ";
	cin >> country>> city>> street;

	cout << "Enter the number of hours worked: ";
	cin >> hourWork;

	cout << "Enter the salary per hour: ";
    cin >> salaryPerHour;

	cout << "Enter the work to do: ";
	cin >> workToDo;

	cout << "Enter the work done: ";
	cin >> workDone;

	Address address(country, city, street);

	Employee employee(name, id, address);
	employee.setHourWork(hourWork);
	employee.setSalaryPerHour(salaryPerHour);
	employee.setWorkToDo(workToDo);
	employee.setWorkDone(workDone);

	std::cout << employee << std::endl;
	employee.calculateSalary();
	
		int x1, y1, x2, y2, divisor;

		cout << "Enter coordinates of Point 1 (x y): ";
		cin >> x1 >> y1;

		cout << "Enter coordinates of Point 2 (x y): ";
		cin >> x2 >> y2;

		Point point1(x1, y1);
		Point point2(x2, y2);

		Point sum = point1 + point2;
		Point diff = point1 - point2;

		cout << "Sum of the points: ";
		sum.printPoints();

		cout << "Difference of the points: ";
		diff.printPoints();

		cout << "Enter the divisor: ";
		cin >> divisor;

		Point result1 = point1 /= divisor;
		result1.printPoints();
		Point result2 = point2 /= divisor;
		result2.printPoints();

		if (point1 >= point2) {
			cout << "point1 is greater than or equal to point2" << endl;
		}
		else {
			cout << "point1 is not greater than or equal to point2" << endl;
		}

		int xr1, yr1, width1, height1;
		int xr2, yr2, width2, height2;

		std::cout << "Enter the coordinates and dimensions of the first rectangle (x y width height): ";
		std::cin >> xr1 >> yr1 >> width1 >> height1;

		Point startPoint1(xr1, yr1);
		Rectangle rect1(startPoint1, width1, height1);

		std::cout << "Enter the coordinates and dimensions of the second rectangle (x y width height): ";
		std::cin >> xr2 >> yr2 >> width2 >> height2;

		Point startPoint2(xr2, yr2);
		Rectangle rect2(startPoint2, width2, height2);

		// Perform addition of rectangles
		Rectangle sumRect = rect1;
		sumRect += rect2;

		// Perform subtraction of rectangles
		Rectangle subRect = rect1;
		subRect -= rect2;

		// Perform division of rectangles
		Rectangle divRect = rect1 / rect2;

		// Check collision between rectangles
		if (rect1.collisionDetection(rect2)) {
			std::cout << "The two rectangles collide." << std::endl;
		}
		else {
			std::cout << "The two rectangles do not collide." << std::endl;
		}

		return 0;
	}




















































