#include <iostream>
#include <string>
using namespace std;
class info
{
    char name[30];
    int roll, total;

public:
    void getdata()
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter total marks: ";
        cin >> total;
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Total marks: " << total;
    }
};
int main()
{
    info s;
    s.getdata();
    s.showdata();
    return 0;
}