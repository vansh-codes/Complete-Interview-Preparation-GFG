#include <bits/stdc++.h>
using namespace std;

class Addition
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        Addition A;
        cout << A.add(a, b) << endl;
    }
    return 0;
}