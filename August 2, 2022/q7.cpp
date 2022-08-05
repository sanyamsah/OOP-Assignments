#include <iostream>
using namespace std;
int sum(int a, int b = 10, int c = 20)
{
    return a + b + c;
}
int main()
{
    cout << "Sum = " << sum(10, 10, 10)<<endl;
    cout << "Sum = " << sum(10, 10)<<endl;
    cout << "Sum = " << sum(10)<<endl;
    return 0;
}