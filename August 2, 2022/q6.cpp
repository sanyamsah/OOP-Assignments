#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void input()
    {
        cout << "Enter the real part: ";
        cin >> r;
        cout << "Enter the imaginary part: ";
        cin >> i;
    }
    complex add(complex n1, complex n2)
    {
        complex temp;
        temp.r = n1.r + n2.r;
        temp.i = n1.i + n2.i;
        return temp;
    }
    complex add(int n, complex n2)
    {
        complex temp;
        temp.r = n + n2.r;
        temp.i = n2.i;
        return temp;
    }
    void output()
    {
        cout << "Sum = " << r << " + " << i << "i " << endl;
    }
};
int main()
{
    complex n1, n2, n3, sum;
    cout << "For first number..\n";
    n1.input();
    cout << "For second number..\n";
    n2.input();
    sum = n3.add(n1, n2);
    sum.output();
    sum = n3.add(2, n2);
    sum.output();
    return 0;
}