#include <iostream>
#include <time.h>
using namespace std;

class account
{
    char name[30];
    int acc;
    char type[10];
    int bal;

public:
    void getdata()
    {
        cout << "\nEnter Name: ";
        gets(name);
        // cin >> name;
        cout << "Enter Account Number: ";
        cin >> acc;
        cout << "Enter Account Type (Savings/Current): ";
        cin >> type;
    }

    int initial(int a, int b)
    {
        srand(time(0));
        int random = rand() % a + b;
        return random;
    }

    int deposit(int a, int b)
    {
        return a + b;
    }

    int withdraw(int a, int b)
    {
        if (a - b >= 500)
        {
            return a - b;
        }
        else
        {
            return 0;
        }
    }

    void display(int a)
    {
        cout << "\nName: " << name;
        cout << "\nAccount Number: " << acc;
        cout << "\nAccount Type: " << type;
        cout << "\nAccount Balance: " << a;
    }
};

int main()
{
    account s;
    int z, x, y, sum;
    int ini = s.initial(10000, 0);

    s.getdata();
    s.display(ini);

    cout << "\n\nWhat to you wanna preform?" << endl;
    cout << "To check balance, Press 1" << endl;
    cout << "To deposit money, Press 2" << endl;
    cout << "To withdraw money, Press 3" << endl
         << "-> ";
    cin >> z;

    switch (z)
    {
    case 1:
        cout << "----------------------------------------------------" << endl;
        s.display(ini);
        break;
    case 2:
        cout << "----------------------------------------------------" << endl;
        cout << "Enter the amount to be deposited: ";
        cin >> x;
        sum = s.deposit(ini, x);
        cout << "\nDeposited: Rs. " << x << "." << endl;
        s.display(sum);
        break;
    case 3:
        cout << "----------------------------------------------------" << endl;
        cout << "Amount to withdraw?: ";
        cin >> y;
        int diff = s.withdraw(ini, y);
        if (s.withdraw(ini, y) > 0)
        {
            cout << "\nAmount withdrawn Rs. " << y << "." << endl;
            s.display(diff);
        }
        else
        {
            cout << "INSUFFICIENT BALANCE" << endl;
            s.display(ini);
        }
        break;
    }
    cout << "\n------------------END OF STATEMENT------------------\n";
    return 0;
}
