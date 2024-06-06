#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void reverse(int &n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    n = rev;
}

void reverse_dig(int &a, int &b)
{
    // Add your code here.
    reverse(a);
    reverse(b);
}

void swap(int &a, int &b)
{
    // Add your code here.
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        reverse_dig(a, b);
        swap(a, b);
        cout << a << " " << b << endl;
    }
    return 0;
}

