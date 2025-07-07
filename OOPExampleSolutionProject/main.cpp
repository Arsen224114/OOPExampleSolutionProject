#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "ShapeLogic.h"

int main() {
    const int size = 5;
    Shape** shapes = new Shape * [size];

    shapes[0] = new Point(1, 2);
    shapes[1] = new Line(Point(0, 0), Point(3, 4));
    shapes[2] = new Triangle(Point(0, 0), Point(4, 0), Point(0, 3));
    shapes[3] = new Rectangle(Point(1, 1), 5, 2);
    shapes[4] = new Circle(Point(0, 0), 3);

    ShapeLogic::printAll(shapes, size);

    Shape* closest = ShapeLogic::findClosestToOrigin(shapes, size);
    cout << "\nClosest to origin: " << (closest ? closest->info() : "None") << "\n";

    cout << "Total area: " << ShapeLogic::totalArea(shapes, size) << "\n";
    cout << "Total perimeter: " << ShapeLogic::totalPerimeter(shapes, size) << "\n";

    for (int i = 0; i < size; ++i) {
        delete shapes[i];
    }
    delete[] shapes;

    return 0;
}