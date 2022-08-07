#include <iostream>
using namespace std;
class employee
{
    string name;
    int number;
    string dept;
    int base;
    // double gross;

public:
    void input()
    {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter employee number: ";
        cin >> number;
        cin.ignore();
        cout << "Enter department: ";
        getline(cin, dept);
        cout << "Enter base salary: ";
        cin >> base;
    }
    inline double gross(employee e)
    {
        return e.base + (0.8 * e.base) + (0.1 * e.base);
    }
    void output()
    {
        cout << "\nEmployee name: " << name << endl;
        cout << "Employee number: " << number << endl;
        cout << "Department: " << dept << endl;
        cout << "Base salary: " << base << endl;
    }
};
int main()
{
    employee e;
    e.input();
    e.output();
    cout << "Gross salary: " << e.gross(e) << endl;
    return 0;
}