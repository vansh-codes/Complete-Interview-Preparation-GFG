#include<bits/stdc++.h>
using namespace std;

void alphabets(char c1, char c2){
    // code here 
    for(char i = c1; i<= c2 ; i++){
        cout<< i << " ";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        char c1, c2;
        cin >> c1 >> c2;

        alphabets(c1, c2);
        cout <<  endl;
    }
    return 0;
}