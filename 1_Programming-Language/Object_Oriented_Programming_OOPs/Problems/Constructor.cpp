#include <bits/stdc++.h>
using namespace std;

class User
{
public:
    string name;

    User()
    {
        this->name = "Default";
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        User user;
        cout << user.name << endl;
    }
    return 0;
}