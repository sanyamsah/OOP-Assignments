#include <iostream>
#include <math.h>
using namespace std;

double volume(int);
double volume(int, int);
int volume(int, int, int);

int main()
{
    int l, b, h;
    int r;
    cout << "Enter the length of radius: ";
    cin >> r;
    cout << "Volume of the sphere = " << volume(r);
    cout << "\nEnter the radius of the base of the cylinder: ";
    cin >> r;
    cout << "Enter the height of the cylinder: ";
    cin >> h;
    cout << "Volume of the cylinder = " << volume(r, h);
    cout << "\nEnter the length of the cuboid: ";
    cin >> l;
    cout << "Enter the breadth of the cuboid: ";
    cin >> b;
    cout << "Enter the height of the cuboid: ";
    cin >> h;
    cout << "Volume of the cylinder = " << volume(l, b, h);
}

double volume(int r)
{
    return (4 / 3.0) * 3.14 * r * r * r;
}
double volume(int r, int h)
{
    return 3.14 * r * r * h;
}
int volume(int l, int b, int h)
{
    return l * b * h;
}