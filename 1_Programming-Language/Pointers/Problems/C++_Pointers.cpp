#include <bits/stdc++.h>
using namespace std;
void updateVar(int *a);

/* int main()
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
} */

int main()
{
    char arr[20];
    int i;
    for (i = 0; i < 8; i++)
        *(arr + i) = 65 + i;
    *(arr + i) = '\0';
    cout << arr;
    return 0;
}
