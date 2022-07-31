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
};
int main()
{
    points p1, p2, d;
    p1.getdata();
    p2.getdata();
    d.showdata();
    double e = d.dist(p1, p2);
    cout << e;
    // cout<<"The distance between ("<<p1.x<<"," <<p1.y<<") & ("<<p2.x<<", "<<p2.y<<") = "<<d.dist(p1, p2)<<"."<<endl;
}