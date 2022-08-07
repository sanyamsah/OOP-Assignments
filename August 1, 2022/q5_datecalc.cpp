#include <iostream>
using namespace std;
class date
{
    int y, m, d;

public:
    void input()
    {
        cin >> y;
        cin >> m;
        cin >> d;
        cout << endl;
    }
    date theage(date a, date b)
    {
        date age;
        age.y = a.y - b.y;
        if (a.m < b.m)
        {
            age.m = (a.m + 12) - b.m;
            age.y--;
        }
        else
        {
            age.m = a.m - b.m;
        }
        if (a.d < b.d)
        {
            age.d = (a.d + 30) - b.d;
            age.m--;
        }
        else
        {
            age.d = a.d - b.d;
        }
        return age;
    }
    void output()
    {
        cout << "Age: " << y << " years " << m << " months & " << d << " days." << endl;
    }
};
int main()
{
    date today, birth, age;
    cout << "Enter today's date (YYYY MM DD): ";
    today.input();
    cout << "Enter your date of birth (YYYY MM DD): ";
    birth.input();
    age = age.theage(today, birth);
    age.output();
    return 0;
}