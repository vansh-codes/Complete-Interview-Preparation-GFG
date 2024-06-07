#include<bits/stdc++.h>
using namespace std;

int strstr(string, string);

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;


        cout << strstr(s1, s2) <<  endl;
    }
    return 0;
}

int strstr(string s, string x)
{
     //Your code here
     int index = s.find(x);
     if(index == string::npos){
         return -1;
     }
     return index;
}
