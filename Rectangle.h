#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include <iostream>

class Rectangle {
private:
    Point startPoint;
    int width;
    int height;

public:
    Rectangle(){}
    Rectangle(const Point& startPoint, int width, int height);
    Rectangle(const Rectangle& other);

    Rectangle operator+=(const Rectangle& other);
    Rectangle operator-=(const Rectangle& other);

    Rectangle operator/(const Rectangle& other) const;

    void setStartPoint(const Point& startPoint);
    Point getStartPoint() const;
    void setWidth(int width);
    int getWidth() const;
    void setHeight(int height);
    int getHeight() const;

    bool collisionDetection(const Rectangle& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);
    friend std::istream& operator>>(std::istream& is, Rectangle& rectangle);
};

#endif

