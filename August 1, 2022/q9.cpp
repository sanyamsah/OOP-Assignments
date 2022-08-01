#include <iostream>
#include <math.h>
using namespace std;
double area(int, int, int);
double area(int, int);
double area(int);
int main()
{
    int a, b, c;
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
double area(int x, int y, int z)
{
    double s = (double)(x + y + z) / 2;
    return sqrt(s * (s - x) * (s - y) * (s - z));
}
double area(int x, int y)
{
    return 0.5 * sqrt(pow(x, 2) - (pow(y, 2) / 4)) * y;
}
double area(int x)
{
    return (sqrt(3) / 4) * pow(x, 2);
}