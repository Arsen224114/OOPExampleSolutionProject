#define _USE_MATH_DEFINES
#include "Shape.h"
#include "Point.h"
#include <sstream>

class Circle : public Shape {
private:
    Point center;
    double radius;

public:
    Circle(Point center, double radius) : center(center), radius(radius) {}

    double getPerimeter() const override {
        return 2 * M_PI * radius;
    }

    double getArea() const override {
        return M_PI * radius * radius;
    }

    double distanceToOrigin() const override {
        return center.distanceToOrigin() - radius;
    }

    std::string info() const override {
        std::ostringstream oss;
        oss << "Circle with center " << center.info() << " and radius " << radius;
        return oss.str();
    }
};