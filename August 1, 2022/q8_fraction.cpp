#include <iostream>
using namespace std;
class fraction
{
    int num;
    int den;

public:
    void input()
    {
        cout << "Enter the numerator: ";
        cin >> num;
        cout << "Enter the denominator: ";
        cin >> den;
    }
    void addnum(fraction a, fraction b)
    {
        num = (a.num * b.den) + (b.num * a.den);
    }
    void addden(fraction a, fraction b)
    {
        den = a.den * b.den;
    }
    int gcd(int a, int b)
    {
        int g;
        for (int i = 1; i <= a || i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                g = i;
            }
        }
        return g;
    }

    void subnum(fraction &a, fraction &b)
    {
        num = (a.num * b.den) - (b.num * a.den);
    }
    void subden(fraction &a, fraction &b)
    {
        den = a.den * b.den;
    }
    void multiplynum(fraction *a, fraction *b)
    {
        num = a->num * b->num;
    }
    void multiplyden(fraction *a, fraction *b)
    {
        den = a->den * b->den;
    }
    void output()
    {
        cout << num / gcd(num, den) << "/" << den / gcd(num, den) << endl;
    }
};
int main()
{
    fraction f1, f2, f;
    cout << "For Fraction 1..\n";
    f1.input();
    cout << "For Fraction 2..\n";
    f2.input();
    f.addnum(f1, f2);
    f.addden(f1, f2);
    f.output();
    f.subnum(f1, f2);
    f.subden(f1, f2);
    f.output();
    f.multiplynum(&f1, &f2);
    f.multiplyden(&f1, &f2);
    f.output();
    return 0;
}