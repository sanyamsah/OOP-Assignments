#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string titlename[50] = {};
string authorname[50] = {};
int bookprice[50] = {};
int number[50] = {};

class book
{
    string title;
    string author;
    int price;
    int n;

public:
    void input()
    {
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Price: ";
        cin >> price;
        cout << "Number: ";
        cin >> n;
        for (int i = 0; i < 50; i++)
        {
            if (titlename[i] == "\0")
            {
                titlename[i] = title;
                authorname[i] = author;
                bookprice[i] = price;
                number[i] = n;
                break;
            }
        }
    }

    void update(string name)
    {
        int q;
        int counter = 0;
        for (int i = 0; i < 50; i++)
        {
            if (titlename[i] == name)
            {
                counter++;
                cout << "Quantity: ";
                cin >> q;
                number[i] = q;
                cout << "Update Successful!" << endl;
                break;
            }
        }
    }

    void add()
    {
        string t;
        string a;
        int p, q;
        cin.ignore();
        cout << "Book Title: ";
        getline(cin, t);
        cout << "Author: ";
        getline(cin, a);
        cout << "Price: ";
        cin >> p;
        cout << "Quantity: ";
        cin >> q;
        for (int i = 0; i < 50; i++)
        {
            if (titlename[i] == "\0")
            {
                titlename[i] = t;
                authorname[i] = a;
                bookprice[i] = p;
                number[i] = n;
                break;
            }
        }
    }

    void output()
    {
        system("CLS");
        cout << "Current Record/s.." << endl;
        cout << "-------------------------------------------------------------------" << endl;
        int counter = 0;
        cout << "SN | \tTitle\t | \tAuthor \t| \tPrice \t| Number |" << endl
             << "-------------------------------------------------------------------\n";
        for (int i = 0; i < 50; i++)
        {
            if (titlename[i] != "\0")
            {
                counter++;
                cout << " " << counter << " \t " << titlename[i] << " \t " << authorname[i]
                     << "  \t" << bookprice[i] << " \t " << number[i] << endl;
            }
        }
        if (counter == 0)
        {
            cout << "No Record Found!" << endl;
        }
        cout << "-------------------------------------------------------------------" << endl;
    }

    int check(string search)
    {
        system("CLS");
        cout << "Current Record/s.." << endl;
        cout << "-------------------------------------------------------------------" << endl;
        int counter = 0;
        for (int i = 0; i < 50; i++)
        {
            if (titlename[i] == search)
            {
                counter++;
                cout << " " << counter << "   " << titlename[i] << " \t " << authorname[i]
                     << " \t " << bookprice[i] << "  \t" << number[i] << endl;
                return i;
                break;
            }
        }
        if (counter == 0)
        {
            cout << "No Record Found!" << endl;
        }
        cout << "-------------------------------------------------------------------" << endl;
    }

    void bill(int i)
    {
        int a = i;
        int x;
        cout << "Quantity?: ";
        cin >> x;
        cout << "Bill: Rs. " << bookprice[i] * x << endl;
        decrease(a, x);
    }

    void decrease(int a, int x)
    {
        number[a] = number[a] - x;
    }
};

int main()
{
    book s;
    s.input();
    int option;
    int role;
    int quan, sn;
    string query;
    do
    {
        cout << "1 - Add Data" << endl;
        cout << "2 - Update Quantity" << endl;
        cout << "3 - Check Book (Query by Title)" << endl;
        cout << "4 - Display Available" << endl;
        cout << "5 - Exit and Save to text file" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Select option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            s.add();
            break;
        case 2:
            cin.ignore();
            cout << "Which Book?: ";
            getline(cin, query);
            s.update(query);
            break;
        case 3:
            char yes;
            int a;
            cin.ignore();
            cout << "Book?: ";
            getline(cin, query);
            s.check(query);
            cout << "Check Out? (Y/N): ";
            cin >> yes;
            if (toupper(yes) == 'Y')
            {
                s.bill(s.check(query));
            }
            break;

        case 4:
            s.output();
            break;
        case 5:
            cout << "EXITING.." << endl;
            break;
        }
    } while (option != 5);
    return 0;
}