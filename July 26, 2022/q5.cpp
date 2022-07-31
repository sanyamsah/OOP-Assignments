#include <iostream>
using namespace std;
class distances
{
    int feet, inches;

public:
    
    void getdata()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    
    void add1(distances p, distances q)
    {
        inches = p.inches + q.inches;
        feet = p.feet + q.feet + (inches / 12);
        inches = inches % 12;
    }
    
    distances add2(distances p, distances q)
    {
        distances temp;
        temp.inches = p.inches + q.inches;
        temp.feet = p.feet + q.feet + (temp.inches / 12);
        temp.inches = temp.inches % 12;
        return temp;
    }
    
    distances add3(distances q)
    {
        distances temp;
        temp.inches = inches + q.inches;
        temp.feet = feet + q.feet + (temp.inches / 12);
        temp.inches = temp.inches % 12;
        return temp;
    }

    void showdata()
    {
        cout << feet << " feet & " << inches << " inches" << endl;
    }
};

int main()
{
    distances d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3.add1(d1, d2);
    d3.showdata();
    d3 = d3.add2(d1, d2);
    d3.showdata();
    d3 = d1.add3(d2);
    d3.showdata();
    return 0;
}