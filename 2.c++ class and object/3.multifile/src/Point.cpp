#include "Point.h"
#include <iostream>
using namespace std;

void Point::setPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::printPoint()
{
    cout << "x: " << x << ", y: " << y << endl;
}
