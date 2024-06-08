#include <bits/stdc++.h>
using namespace std;

class User{
    public:
        string name;
        User(){
            this->name = "Default";
        }
        
        User(string name){
            this->name = name;
        }
};

int main()
{
    int t;
    cin >> t;
    string name;
    getline(cin, name);
    while (t--)
    {
        User user;
        cout << user.name << endl;
        string name; getline(cin, name);
        User user2(name);
        cout << user2.name << endl;

    }
    return 0;
}