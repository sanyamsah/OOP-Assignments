#include <iostream>
using namespace std;
inline int sq(int a)
{
    return a * a;
}
inline int cu(int a)
{
    return a * a * a;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The square of the number is: " << sq(n) << endl;
    cout << "The cube of the number is: " << cu(n) << endl;
    return 0;
}