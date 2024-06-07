#include<bits/stdc++.h>
using namespace std;

int countWords(string);

int countWords(string str) {
        //Your code here
        int count = 0;
        for(char s: str){
            if(s == ' '){
                count++;
            }
        }
        return count+1;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);

        cout << countWords(s) <<  endl;
    }
    return 0;
}
