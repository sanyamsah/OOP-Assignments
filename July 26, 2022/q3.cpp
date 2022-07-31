#include <iostream>
#include <string>
using namespace std;
class info
{
    char name[30];
    int roll, m1, m2, m3, m4, m5;
    float per;

public:
    void getdata()
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks in DSA: ";
        cin >> m1;
        cout << "Enter marks in OOP: ";
        cin >> m2;
        cout << "Enter marks in DE: ";
        cin >> m3;
        cout << "Enter marks in PS: ";
        cin >> m4;
        cout << "Enter marks in DMS: ";
        cin >> m5;
        cout << endl;
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Marks in DSA: " << m1 << endl;
        cout << "Marks in OOP: " << m2 << endl;
        cout << "Marks in DE: " << m3 << endl;
        cout << "Marks in PS: " << m4 << endl;
        cout << "Marks in DMS: " << m5 << endl;
        cout << "Total marks = " << m1 + m2 + m3 + m4 + m5 << endl;
        per = (m1 + m2 + m3 + m4 + m5) * 0.2;
        cout << "Percentage = " << per << endl;
    }
};
int main()
{
    info i;
    i.getdata();
    i.showdata();
    return 0;
}