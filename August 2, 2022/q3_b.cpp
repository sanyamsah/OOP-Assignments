#include <iostream>
using namespace std;
void display(char a = '*', int n = 10)
{
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
    }
}
int main()
{
    display();
    cout << endl;
    display('s', 9);
    cout << endl;
    display('s');
}