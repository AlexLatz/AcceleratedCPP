#include "Classes.h"
#include <math.h>
#include <iostream>

int Point::distance(Point other) {
    int xDist = (this->x - other.getX());
    xDist *= xDist;
    int yDist = (this->y - other.getY());
    yDist *= yDist;
    return sqrt(xDist + yDist);
}

int main() {
    Point p;
    Point p2(0, 2);
    Point p3(1, 0);
    Point p4(1, 2);
    Rect r(p, p2, p3, p4);
    std::cout << r.area() << std::endl;
}
