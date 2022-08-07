#include <iostream>
using namespace std;

class student
{
    int roll;
    string name;
    int m1, m2, m3;
    int total;
    double avg;

public:
    void input()
    {
        cin.ignore();
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    double average()
    {
        total = m1 + m2 + m3;
        avg = total / 3.0;
    }
    double avgofstudents(int n, student s[])
    {
        double average;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += s[i].avg;
        }
        average = sum / n;
        return average;
    }
    int aboveavg(int n, student s[], double average)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i].avg > average)
            {
                count++;
            }
        }
        return count;
    }
    int belowavg(int n, student s[], double average)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i].avg < average)
            {
                count++;
            }
        }
        return count;
    }
    void sorting(int n, student s[])
    {
        student temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i].total < s[i].total)
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }
    void highname()
    {
        cout << name << " Secured the Highest Marks: " << total << endl;
    }
    void highroll()
    {
        cout << "Roll no.: " << roll << endl;
    }
};
int main()
{
    int n;
    double average;
    cout << "Enter the number of students: ";
    cin >> n;
    int i;
    student s[n], a;
    for (i = 0; i < n; i++)
    {
        s[i].input();
    }
    for (i = 0; i < n; i++)
    {
        s[i].average();
    }
    average = a.avgofstudents(n, s);
    cout << "Number of students scoring above average marks: " << a.aboveavg(n, s, average) << endl;
    cout << "Number of students scoring below average marks: " << a.belowavg(n, s, average) << endl;
    a.sorting(n, s);
    s[n - 1].highname();
    s[n - 1].highroll();
    return 0;
}