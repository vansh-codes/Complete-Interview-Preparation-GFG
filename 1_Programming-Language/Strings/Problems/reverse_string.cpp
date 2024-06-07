#include<bits/stdc++.h>
using namespace std;

string reverseString(string);

string reverseString(string s) {
    // code here
    int start = 0, end = s.size()-1;
    while(start<=end){
        char temp = s[start];
        s[start] = s[end];
        s[end--] = temp;
        start++;
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseString(s) <<  endl;
    }
    return 0;
}
