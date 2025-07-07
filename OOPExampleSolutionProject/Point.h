#include "Shape.h"
#include <sstream>

class Point : public Shape {
private:
    double x, y;

public:
    Point(double x, double y) : x(x), y(y) {}

    double getX() const { return x; }
    double getY() const { return y; }

    double getPerimeter() const override { return 0.0; }
    double getArea() const override { return 0.0; }

    double distanceToOrigin() const override {
        return sqrt(x * x + y * y);
    }

    string info() const override {
        ostringstream oss;
        oss << "Point(" << x << ", " << y << ")";
        return oss.str();
    }
};