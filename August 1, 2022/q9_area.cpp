#include <iostream>
#include <math.h>
using namespace std;
double area(double, double, double); // function 1
double area(double, double);         // function 2
double area(double);                 // function 3
int main()
{
    double a, b, c;
    cout << "Enter the length of the 3 sides of an scalene triangle (a b c): ";
    cin >> a >> b >> c;
    cout << "Area = " << area(a, b, c);
    cout << "\nEnter the length of two unequal sides of an isosceles triangle (a b): ";
    cin >> a >> b;
    cout << "Area = " << area(a, b);
    cout << "\nEnter the length of a side of an equilateral triangle (a): ";
    cin >> a;
    cout << "Area = " << area(a);
    return 0;
}
double area(double x, double y, double z) // function 1
{
    double s = (x + y + z) / 2;
    return sqrt(s * (s - x) * (s - y) * (s - z));
}
double area(double x, double y) // function 2
{
    return (1 / 2.0) * sqrt(pow(x, 2) - (pow(y, 2) / 4)) * y;
}
double area(double x) // function 3
{
    return (sqrt(3) / 4) * pow(x, 2);
}