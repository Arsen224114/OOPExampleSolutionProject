#include "Shape.h"
#include <vector>
#include <iostream>
#include <limits>

class ShapeLogic {
public:
    static void printAll(const vector<Shape*>& shapes) {
        for (const auto& shape : shapes) {
            cout << shape->info() << "\n";
        }
    }

    static Shape* findClosestToOrigin(const vector<Shape*>& shapes) {
        Shape* closest = nullptr;
        double minDist = numeric_limits<double>::max();
        for (const auto& shape : shapes) {
            double dist = shape->distanceToOrigin();
            if (dist < minDist) {
                minDist = dist;
                closest = shape;
            }
        }
        return closest;
    }

    static double totalArea(const vector<Shape*>& shapes) {
        double sum = 0;
        for (const auto& shape : shapes) {
            sum += shape->getArea();
        }
        return sum;
    }

    static double totalPerimeter(const vector<Shape*>& shapes) {
        double sum = 0;
        for (const auto& shape : shapes) {
            sum += shape->getPerimeter();
        }
        return sum;
    }
};