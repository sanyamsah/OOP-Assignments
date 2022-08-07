#include <iostream>
#include <string>
using namespace std;
class info
{
    string code;
    string name;
    int price, quan, tot;

public:
    void input()
    {
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quan;
    }
    info total(info a)
    {
        int tot;
        a.tot = a.price * a.quan;
        return a;
    }
    void output()
    {
        cout << "\t" << code << "\t" << name << "\t" << price << "\t" << quan << "\t" << tot << endl;
    }
    int totalsum(info arr[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i].tot;
        }
        return sum;
    }
};
int main()
{
    info arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i].input();
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i].total(arr[i]);
    }
    cout << "S.N.\t Code\t Name\t Price\t Quantity\t Total\t" << endl;
    cout << "------------------------------------------------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1;
        arr[i].output();
    }
    int t;
    info to;
    t = to.totalsum(arr, 10);
    cout << "------------------------------------------------------------------" << endl;
    cout << "TOTAL = Rs. " << t;
    return 0;
}