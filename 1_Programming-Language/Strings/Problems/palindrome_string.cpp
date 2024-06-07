#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string S) {
    // code here
    int start = 0, end = S.size()-1;
    if(S[start++] != S[end--]) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << isPalindrome(s) <<  endl;
    }
    return 0;
}
