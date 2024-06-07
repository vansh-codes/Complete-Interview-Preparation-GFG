#include<bits/stdc++.h>
using namespace std;

void toBinary(string N) {
    // code here
    int number = stoi(N);
    string decimal = "";
    while(number>0){
        decimal += to_string(number % 2);
        number/=2;
    }
    reverse(decimal.begin(), decimal.end());
    cout<<decimal;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        toBinary(s);
        cout<<endl;
    }
    return 0;
}
