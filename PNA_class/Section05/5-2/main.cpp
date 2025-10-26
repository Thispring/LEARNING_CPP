#include <iostream>
using namespace std;

#include "circle.h"

int main()
{
    Circle donut;
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza(30);
    double area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    return 0;
}