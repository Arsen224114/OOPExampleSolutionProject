#pragma once
#include <string>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getPerimeter() const = 0;
    virtual double getArea() const = 0;
    virtual double distanceToOrigin() const = 0;
    virtual std::string info() const = 0;
    virtual ~Shape() {}
};