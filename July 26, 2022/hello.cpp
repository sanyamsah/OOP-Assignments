#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[30];
    cout << "What is your name?"<<endl<<"-> ";
    cin >> name;
    cout << "Hello, " << name << "." << endl;
    return 0;
}