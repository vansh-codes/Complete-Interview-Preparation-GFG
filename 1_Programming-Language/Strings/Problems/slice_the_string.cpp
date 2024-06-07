#include<bits/stdc++.h>
using namespace std;

string sliceString(string);

string sliceString(string s) {
    // code here
    return s.substr(1, s.size()-2);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << sliceString(s) <<  endl;
    }
    return 0;
}
