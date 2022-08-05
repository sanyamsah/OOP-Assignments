#include <iostream>
using namespace std;
inline int incr(int a)
{
    return ++a;
}
int main()
{
    int n;
    cout << "Enter a number: "; 
    cin >> n;
    cout << incr(n);
    return 0;
}