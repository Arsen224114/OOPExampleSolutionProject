#include "Shape.h"
#include "Point.h"
#include <sstream>

class Triangle : public Shape {
private:
    Point a, b, c;

    double sideLength(const Point& p1, const Point& p2) const {
        double dx = p2.getX() - p1.getX();
        double dy = p2.getY() - p1.getY();
        return sqrt(dx * dx + dy * dy);
    }

public:
    Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}

    double getPerimeter() const override {
        return sideLength(a, b) + sideLength(b, c) + sideLength(c, a);
    }

    double getArea() const override {
        double ab = sideLength(a, b);
        double bc = sideLength(b, c);
        double ca = sideLength(c, a);
        double p = getPerimeter() / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ca));
    }

    double distanceToOrigin() const override {
        return min({ a.distanceToOrigin(), b.distanceToOrigin(), c.distanceToOrigin() });
    }

    string info() const override {
        ostringstream oss;
        oss << "Triangle with vertices " << a.info() << ", " << b.info() << ", " << c.info();
        return oss.str();
    }
};