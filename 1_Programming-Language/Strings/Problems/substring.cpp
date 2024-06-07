#include<bits/stdc++.h>
using namespace std;

string substring(string, int, int);

string substring(string S, int L, int R) {
    // code here
    return S.substr(L,R-L+1);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int L, R;
        cin >> L >> R;

        cout << substring(s, L, R) <<  endl;
    }
    return 0;
}
