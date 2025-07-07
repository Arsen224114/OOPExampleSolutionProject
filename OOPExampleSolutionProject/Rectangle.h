#include "Shape.h"
#include "Point.h"
#include <sstream>

class Rectangle : public Shape {
private:
    Point topLeft;
    double size, height;

public:
    Rectangle(Point topLeft, double size, double height)
        : topLeft(topLeft), size(size), height(height) {}

    double getPerimeter() const override {
        return 2 * (size + height);
    }

    double getArea() const override {
        return size * height;
    }

    double distanceToOrigin() const override {
        return topLeft.distanceToOrigin();
    }

    string info() const override {
        ostringstream oss;
        oss << "Rectangle at " << topLeft.info() << " with size " << size << " and height " << height;
        return oss.str();
    }
};