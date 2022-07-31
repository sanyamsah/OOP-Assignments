#include <iostream>
#include <math.h>
using namespace std;
class points
{
    int x, y;

public:
    void getdata()
    {
        cout << "Enter abscissa: ";
        cin >> x;
        cout << "Enter ordinate: ";
        cin >> y;
    }

    double dist(points a, points b)
    {
        double c = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
        return c;
    }
    void showdata()
    {
        cout << "The distance between the two points is: ";
    }
    int ax(points a)
    {
        return a.x;
    }
    int ay(points a)
    {
        return a.y;
    }
};
int main()
{
    points p1, p2, d;
    cout << "For first point.." << endl;
    p1.getdata();
    cout << "For second point.." << endl;
    p2.getdata();
    d.showdata();
    double e = d.dist(p1, p2);
    cout << e << endl;
    cout << "The distance between (" << d.ax(p1) << "," << d.ay(p1) << ") & ("
         << d.ax(p2) << "," << d.ay(p2) << ") = " << d.dist(p1, p2) << "." << endl;
    return 0;
}
