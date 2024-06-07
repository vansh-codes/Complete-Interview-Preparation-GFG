#include <bits/stdc++.h>
using namespace std;
void updateVar(int *a);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        updateVar(&a);
        cout << a << "\n";
    }
    return 0;
}

void updateVar(int *a)
{
      // write your code here
      *a = *a + 10;
}
