#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int *address;
        address = &a;
        cout << *address << endl;
    }
    return 0;
}