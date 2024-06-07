#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(string str) {
    // code here
    int base = 1;
    int ans = 0;
    int s = str.size();
    for(int i = s-1; i>=0; i--){
        int digit = str[i] - '0';
        ans += digit * base;
        base *= 2;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << binary_to_decimal(s) <<  endl;
    }
    return 0;
}
