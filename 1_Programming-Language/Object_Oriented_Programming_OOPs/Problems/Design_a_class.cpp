#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
        void display(){
            cout<<"Hello World"<<endl;
        }
};

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        MyClass obj;
        obj.display();
    }
    return 0;
}   