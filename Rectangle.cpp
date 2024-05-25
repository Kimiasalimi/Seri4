#include "Rectangle.h"
#include <algorithm>
#include<iostream>
using namespace std;

Rectangle::Rectangle(const Point& startPoint, int width, int height)
    : startPoint(startPoint), width(width), height(height) {}

Rectangle::Rectangle(const Rectangle& other)
    : startPoint(other.startPoint), width(other.width), height(other.height) {}

Rectangle Rectangle::operator+=(const Rectangle& other) {
    if (startPoint.getX() != other.getStartPoint().getX() || startPoint.getY() != other.getStartPoint().getY()) {
        cerr << "Error: Rectangles have different start points. Cannot add them." << endl;
        return *this;
    }

    width = max(width, other.getWidth());
    height = max(height, other.getHeight());
    return *this;
}

Rectangle Rectangle::operator-=(const Rectangle& other) {
 // Subtract the width and height of the other rectangle from this rectangle
    width -= other.width;
    height -= other.height;
    // Ensure width and height are non-negative
    if (width < 0) width = 0;
    if (height < 0) height = 0;
    return *this;
}

Rectangle Rectangle::operator/(const Rectangle& other) const {
    int newWidth = width / 2;
    int newHeight = height / 2;
    Point newStartPoint((startPoint.getX() + other.startPoint.getX()) / 2, (startPoint.getY() + other.startPoint.getY()) / 2);
    return Rectangle(newStartPoint, newWidth, newHeight);
}















void Rectangle::setStartPoint(const Point& startPoint) {
    this->startPoint = startPoint;
}

Point Rectangle::getStartPoint() const {
    return startPoint;
}

void Rectangle::setWidth(int width) {
    this->width = width;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setHeight(int height) {
    this->height = height;
}

int Rectangle::getHeight() const {

    return height;
}

bool Rectangle::collisionDetection(const Rectangle& other) const {
 int thisLeft = startPoint.getX();
    int thisRight = startPoint.getX() + width;
    int thisTop = startPoint.getY();
    int thisBottom = startPoint.getY() + height;

    int otherLeft = other.getStartPoint().getX();
    int otherRight = other.getStartPoint().getX() + other.getWidth();
    int otherTop = other.getStartPoint().getY();
    int otherBottom = other.getStartPoint().getY() + other.getHeight();

    // Check for collision in the x-axis
    bool xOverlap = thisLeft < otherRight && 

thisRight > otherLeft;
    
    // Check for collision in the y-axis
    bool yOverlap = thisTop < otherBottom && thisBottom > otherTop;

    // Return true if there is both x and y overlap
    return xOverlap && yOverlap;
}
std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle) {
    os << "Start Point: (" << rectangle.getStartPoint().getX() << ", " << rectangle.getStartPoint().getY() << "), Width: " << rectangle.getWidth() << ", Height: " << rectangle.getHeight();
    return os;
}

std::istream& operator>>(std::istream& is, Rectangle& rectangle) {
    int x, y, width, height;
    is >> x >> y >> width >> height;
    rectangle.setStartPoint(Point(x, y));
    rectangle.setWidth(width);
    rectangle.setHeight(height);
    return is;
}

   
