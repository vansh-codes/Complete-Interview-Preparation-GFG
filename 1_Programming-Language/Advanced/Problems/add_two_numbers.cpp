#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;

        //complete auto add 
        auto add = [](int x, int y){ 
            return x+y; 
        };
        cout << add(x,y) << endl;
    }
    return 0;
}