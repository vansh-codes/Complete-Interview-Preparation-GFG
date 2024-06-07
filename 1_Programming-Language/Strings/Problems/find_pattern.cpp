#include<bits/stdc++.h>
using namespace std;

int findPattern(string, string);

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string p;
        cin >> s;
        cin >> p;


        cout << findPattern(s, p) <<  endl;
    }
    return 0;
}

int findPattern(string s, string p)
{
     //Your code here
     int index = s.find(p);
     if(index == string::npos){
         return -1;
     }
     return index;
}
