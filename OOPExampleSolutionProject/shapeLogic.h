#include "Shape.h"
#include <iostream>
#include <limits>

class ShapeLogic {
public:
    // ����� ���������� ��� ���� �������
    static void printAll(Shape** shapes, int size) {
        for (int i = 0; i < size; ++i) {
            cout << shapes[i]->info() << "\n";
        }
    }

    // ����� ������, ��������� � ������ ���������
    static Shape* findClosestToOrigin(Shape** shapes, int size) {
        if (size == 0) return nullptr;

        Shape* closest = shapes[0];
        double minDist = shapes[0]->distanceToOrigin();

        for (int i = 1; i < size; ++i) {
            double dist = shapes[i]->distanceToOrigin();
            if (dist < minDist) {
                minDist = dist;
                closest = shapes[i];
            }
        }
        return closest;
    }

    // ��������� ������� ���� �����
    static double totalArea(Shape** shapes, int size) {
        double sum = 0.0;
        for (int i = 0; i < size; ++i) {
            sum += shapes[i]->getArea();
        }
        return sum;
    }

    // ��������� �������� ���� �����
    static double totalPerimeter(Shape** shapes, int size) {
        double sum = 0.0;
        for (int i = 0; i < size; ++i) {
            sum += shapes[i]->getPerimeter();
        }
        return sum;
    }
};