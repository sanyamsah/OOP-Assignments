#include <iostream>
#include <math.h>
using namespace std;

double area(int);
int area(int, int);
double area(int, int, int);

int main()
{
    int a, b, c, r;
    cout << "Enter the length of radius: ";
    cin >> r;
    cout << "Area of the circle = " << area(r);
    cout << "\nEnter the length of rectangle: ";
    cin >> a;
    cout << "Enter the breadth of rectangle: ";
    cin >> b;
    cout << "Area of the circle = " << area(a, b);
    cout << "\nEnter the lengths of the sides of triangle (a b c):";
    cin >> a >> b >> c;
    cout << "Area of the circle = " << area(a, b, c);
}

double area(int r)
{
    return 3.14 * r * r;
}

int area(int a, int b)
{
    return a * b;
}

double area(int a, int b, int c)
{
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}