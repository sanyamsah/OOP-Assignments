#include <iostream>
using namespace std;

void swapvalue(int a, int b);
void swapref(int &a, int &b);
void swapad(int *a, int *b);

int main()
{
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    swapvalue(x, y);
    swapref(x, y);
    swapad(&x, &y);
}

void swapvalue(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "After swapping, x = " << a << " & y = " << b << endl;
}

void swapref(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "After swapping, x = " << a << " & y = " << b << endl;
}

void swapad(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    cout << "After swapping, x = " << *a << " & y = " << *b << endl;
}