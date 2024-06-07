/* #include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPangram(const string &str) {
    vector<bool> visited(26, false);
    for (char ch : str) {
        if (isalpha(ch)) {
            int index = tolower(ch) - 'a';
            visited[index] = true;
        }
    }
    for (bool val : visited) {
        if (!val) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin>>str;
    cout << "Is pangram? " << boolalpha << isPangram(str) << endl; //the boolalpha here prints true for 1, false for 0
    return 0;
} */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s("geeksforgeeks");
    cout << s.substr(3).substr(5);
    return 0;
}