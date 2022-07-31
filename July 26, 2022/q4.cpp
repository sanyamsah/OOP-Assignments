#include <iostream>
#include <string.h>
using namespace std;
class complex
{
    int real, imag;

public:
    void getdata()
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imag;
    }
    void showdata()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex n[10];
    for (int i = 0; i < 10; i++)
    {
        n[i].getdata();
    }
    for (int i = 0; i < 10; i++)
    {
        n[i].showdata();
    }
    return 0;
}