#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int roll;
    string name;
    int dsa, oop, de, eco, dms, ps, dl, ol;
    double gpa;

public:
    void input()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        // cin >> name;
        cout << "Enter Roll number: ";
        cin >> roll;
        cout << "Enter marks in DSA: ";
        cin >> dsa;
        cout << "Enter marks in OOP: ";
        cin >> oop;
        cout << "Enter marks in PS: ";
        cin >> ps;
        cout << "Enter marks in DMS: ";
        cin >> dms;
        cout << "Enter marks in DE: ";
        cin >> de;
        cout << "Enter marks in Economics: ";
        cin >> eco;
        cout << "Enter marks in DSA Lab: ";
        cin >> dl;
        cout << "Enter marks in OOP Lab: ";
        cin >> ol;
    }
    double sgpa()
    {
        gpa = ((((dsa / 10) + 1) * 4) +
               (((oop / 10) + 1) * 3) +
               (((ps / 10) + 1) * 3) +
               (((dms / 10) + 1) * 3) +
               (((de / 10) + 1) * 3) +
               (((eco / 10) + 1) * 3) +
               (((dl / 10) + 1) * 1) +
               (((ol / 10) + 1) * 1)) / 21.0;
    }
    void output()
    {
        cout << endl;
        cout<<"\tKALINGA INSTITUTE OF INDUSTRIAL TECHNOLOGY\n";
        cout<<"\t\tThird Semester Marksheet\n";
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout<<"Subject\t\tFull Marks\tPass Marks\t Marks Obtained\n";
        cout<<"-----------------------------------------------------------------\n";
        cout << "DSA  \t\t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<dsa << endl;
        cout << "OOP  \t\t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<oop << endl;
        cout << "PS  \t\t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<ps << endl;
        cout << "DMS  \t\t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<dms << endl;
        cout << "DE  \t\t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<de << endl;
        cout << "Economics  \t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<eco << endl;
        cout << "DSA Lab  \t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<dl << endl;
        cout << "OOP Lab  \t" <<"   "<<100<<"\t\t"<<"   "<<50<<"\t\t\t"<<ol << endl;
        cout<<"-----------------------------------------------------------------\n";
        cout << "SGPA: " << gpa << endl;
        cout<<"\n";
    }
};
int main()
{
    student s;
    s.input();
    s.sgpa();
    s.output();
    return 0;
}