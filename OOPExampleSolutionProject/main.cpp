#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "ShapeLogic.h"

int main() {
   vector<Shape*> shapes;

    shapes.push_back(new Point(1, 2));
    shapes.push_back(new Line(Point(0, 0), Point(3, 4)));
    shapes.push_back(new Triangle(Point(0, 0), Point(4, 0), Point(0, 3)));
    shapes.push_back(new Rectangle(Point(1, 1), 5, 2));
    shapes.push_back(new Circle(Point(0, 0), 3));

    ShapeLogic::printAll(shapes);

    cout << "\nClosest to origin: " << ShapeLogic::findClosestToOrigin(shapes)->info() << "\n";
    cout << "Total area: " << ShapeLogic::totalArea(shapes) << "\n";
    cout << "Total perimeter: " << ShapeLogic::totalPerimeter(shapes) << "\n";

    for (auto shape : shapes) delete shape;
    return 0;
}