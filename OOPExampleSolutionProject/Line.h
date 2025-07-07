#include "Shape.h"
#include "Point.h"
#include <sstream>

class Line : public Shape {
private:
    Point p1, p2;

public:
    Line(Point a, Point b) : p1(a), p2(b) {}

    double getPerimeter() const override {
        double dx = p2.getX() - p1.getX();
        double dy = p2.getY() - p1.getY();
        return sqrt(dx * dx + dy * dy);
    }

    double getArea() const override { return 0.0; }

    double distanceToOrigin() const override {
        return min(p1.distanceToOrigin(), p2.distanceToOrigin());
    }

    string info() const override {
        ostringstream oss;
        oss << "Line from " << p1.info() << " to " << p2.info();
        return oss.str();
    }
};