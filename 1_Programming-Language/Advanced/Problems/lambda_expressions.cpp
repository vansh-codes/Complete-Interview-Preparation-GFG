#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        auto square = [](int x){
            return x*x;
        };
        cout << square(x) << endl;
    }
    return 0;
}