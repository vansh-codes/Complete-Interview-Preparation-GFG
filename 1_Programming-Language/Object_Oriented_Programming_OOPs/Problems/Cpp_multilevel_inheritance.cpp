#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void display_number()
    {
        cout << roll_number << endl;
    }
};

class test : public student
{
    // Add set_marks() method here.
public:
    float marks[5];

    void set_marks(float arr[])
    {
        for (int i = 0; i < 5; i++)
        {
            marks[i] = arr[i];
        }
    }
};

class result : public test
{
    // Add display() method here.
public:
    // float total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    double total = 0.0;
    float avg = 0.0;
    void calc_result()
    {
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        avg = total / 5;
    }

    void display()
    {
        calc_result();
        cout << roll_number << " " << total << " " << avg << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        result student1;
        int n;
        cin >> n;
        student1.set_number(n);
        float temp[5];
        int i;
        for (i = 0; i < 5; i++)
            cin >> temp[i];

        student1.set_marks(temp);
        student1.display();
    }
    return 0;
}