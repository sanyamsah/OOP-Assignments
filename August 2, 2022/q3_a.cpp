#include <iostream>
using namespace std;
void display();
void display(char);
void display(char, int);
int main()
{
    char a = 'r';
    int n = 20;
    cout << endl;
    display();
    cout << endl;
    display(a);
    cout << endl;
    display(a, n);
}
void display()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "* ";
    }
}
void display(char a)
{
    for (int i = 0; i < 10; i++)
    {
        cout << a << " ";
    }
}
void display(char a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
    }
}