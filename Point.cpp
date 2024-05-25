#include "Point.h"
#include<iostream>

Point::Point(int x, int y) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator-(const Point& other) const {
    return Point(x - other.x, y - other.y);
}

Point& Point::operator/=(const int divisor) {
    if (divisor == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;

        return *this;
    }
    x /= divisor;
    y /= divisor;
    return *this;
}

bool Point::operator>=(const Point& other) const {
    return (x * x + y * y) >= (other.x * other.x + other.y * other.y);
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.getX() << ", " << point.getY() << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Point& point) {
    int x, y;
    is >> x >> y;
    point.setX(x);
    point.setY(y);

    return is;
}
void Point::printPoints() {
    std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
}



























































































































