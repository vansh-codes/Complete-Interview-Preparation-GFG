#include<bits/stdc++.h>
using namespace std;

int lengthString(string);

int lengthString(string str) {
    // code here
    return str.size();
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << lengthString(s) <<  endl;
    }
    return 0;
}
