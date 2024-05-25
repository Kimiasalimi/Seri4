
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0);
    Point(const Point& other);

    Point operator+(const Point& other) const;
    Point operator-(const Point& other) const;
    Point& operator/=(const int divisor);
    bool operator>=(const Point& other) const;


    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void printPoints();
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
    friend std::istream& operator>>(std::istream& is, Point& point);
};

#endif
