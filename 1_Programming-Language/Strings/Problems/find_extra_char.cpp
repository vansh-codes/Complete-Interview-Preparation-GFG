#include<bits/stdc++.h>
using namespace std;

char extraChar(string, string);

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;


        cout << extraChar(s1, s2) <<  endl;
    }
    return 0;
}

char extraChar(string s1, string s2)
{
    char result = 0;
    for (char c : s1) {
        result ^= c;
    }
    for (char c : s2) {
        result ^= c;
    }
    return result;
}
