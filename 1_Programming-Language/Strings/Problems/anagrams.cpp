#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b) {
    if (a.size() != b.size()) return false;

    string sorted_a = a, sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());

    return sorted_a == sorted_b;
}

int main() {
    string a;
    string b;
    cin>>a;
    cin>>b;

    if (isAnagram(a, b)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}