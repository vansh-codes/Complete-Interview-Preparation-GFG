#include<bits/stdc++.h>
using namespace std;

void getLine() {
        //Your code here
    string a;
    getline(cin,a, '@');
    cout << a << endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getLine();
    }
    return 0;
}
