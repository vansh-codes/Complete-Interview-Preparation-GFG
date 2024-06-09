#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int integer_value;
        for (int i = 0; i < n; i++)
        {
            cin >> integer_value;
            v.push_back(integer_value);
        }

        sort(v.begin(), v.end(), [](int a, int b)
             { return b < a; });

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}