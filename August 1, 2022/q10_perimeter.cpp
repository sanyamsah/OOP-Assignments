#include <iostream>
using namespace std;
double perimeter(int);
int perimeter(int, int);
int perimeter(int, int, int);
int main()
{
    int r, a, b, c;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Perimeter = " << perimeter(r);
    cout << "\nEnter the length of the rectangle: ";
    cin >> a;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;
    cout << "Perimeter = " << perimeter(a, b);
    cout << "\nEnter the length of the 3 sides of the triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "Perimeter = " << perimeter(a, b, c);
    }
    else
    {
        cout << "The triangle cannot be formed..\n";
    }
    return 0;
}
double perimeter(int a)
{
    return 2.0 * 3.14 * a;
}
int perimeter(int a, int b)
{
    return 2 * (a + b);
}
int perimeter(int a, int b, int c)
{
    return a + b + c;
}