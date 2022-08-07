#include <iostream>
using namespace std;
class vector
{
    double x, y, z;

public:
    void input()
    {
        cout << "Enter the x-component of the vector: ";
        cin >> x;
        cout << "Enter the y-component of the vector: ";
        cin >> y;
        cout << "Enter the z-component of the vector: ";
        cin >> z;
    }
    void modify()
    {
        cin.ignore();
        cout << "Which component you wanna modify?: ";
        char a;
        int b;
        cin >> a;
        if (toupper(a) == 'X' || toupper(a) == 'Y' || toupper(a) == 'Z')
        {
            cout << "New value of " << a << "-component?: ";
            cin >> b;
        }
        if (toupper(a) == 'X')
        {
            x = b;
        }
        else if (toupper(a) == 'Y')
        {
            y = b;
        }
        else
        {
            z = b;
        }
        cout << "Operation Successful..\n";
        cout << "\n";
    }
    void multiply1()
    {
        char a;
        int b;
        cin.ignore();
        cout << "Multiply which axis by a scalar value?: ";
        cin >> a;
        if (toupper(a) == 'X' || toupper(a) == 'Y' || toupper(a) == 'Z')
        {
            cout << "Multiply " << a << "-component by which value?: ";
            cin >> b;
            if (toupper(a) == 'X')
            {
                x = b * x;
            }
            else if (toupper(a) == 'Y')
            {
                y = b * y;
            }
            else
            {
                z = b * z;
            }
        }
        cout << "\n";
    }
    void multiply2()
    {
        int b;
        cout << "Multiply by?: ";
        cin >> b;
        x = x * b;
        y = y * b;
        z = z * b;
        cout << "\n";
    }
    void divide()
    {
        double b;
        cout << "Divide by?: ";
        cin >> b;
        x = x / b;
        y = y / b;
        z = z / b;
        cout << "\n";
    }
    void add()
    {
        int b;
        cout << "Add by?: ";
        cin >> b;
        x += b;
        y += b;
        z += b;
        cout << "\n";
    }
    void display()
    {
        cout << "-> V(" << x << "," << y << "," << z << ")" << endl;
        cout << "\n";
    }
};

int main()
{
    vector v;
    int option;
    cout << "Create the vector..\n";
    v.input();
    do
    {
        cout << "\nPress 1 to Modify the value of a given axis\n";
        cout << "Press 2 to Multiply by scalar value for a given axis\n";
        cout << "Press 3 to Multiply by scalar value for all axes\n";
        cout << "Press 4 to Divide by scalar value for all axes\n";
        cout << "Press 5 to Add by scalar value for all axes\n";
        cout << "Press 6 to Display the vector in the form P(x, y, z)\n";
        cout << "Press 7 to EXIT\n";
        cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . \n";
        cout << "Select: ";
        cin >> option;
        switch (option)
        {
        case 1:
            v.modify();
            break;

        case 2:
            v.multiply1();
            break;
        case 3:
            v.multiply2();
            break;
        case 4:
            v.divide();
            break;
        case 5:
            v.add();
            break;
        case 6:
            v.display();
            break;
        }

    } while (option != 7);
    return 0;
}