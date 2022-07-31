#include <iostream>
using namespace std;
class empl
{
    int id;
    string name;
    int age;
    int bs;

public:
    void getdata()
    {
        cout << "Enter Employee id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Basic Salary: ";
        cin >> bs;
    }
    float gross(empl a)
    {
        float gs = a.bs + 0.8 * a.bs + 0.1 * a.bs;
        return gs;
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Employee id: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Basic Salary: " << bs << endl;
    }
};
int main()
{
    empl e1;
    e1.getdata();
    e1.showdata();
    cout << "Gross Salary: " << e1.gross(e1) << endl;
    return 0;
}