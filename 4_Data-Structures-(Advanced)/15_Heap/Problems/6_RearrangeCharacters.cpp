//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to rearrange the characters in a string such that
    // no two adjacent characters are same.
    string rearrangeString(string str)
    {
        // Your code here
        int n = str.size();
        vector<pair<int, char>> hash(26, make_pair(0, 0)); //-----max space O(26)
        int t = 0;
        for (char ch : str) //----O(n)
        {
            hash[ch - 'a'].first++;
            hash[ch - 'a'].second = ch;
            if (hash[ch - 'a'].first > (n + 1) / 2)
                return "-1";
        }

        sort(hash.begin(), hash.end());

        string res(n, ' ');

        int j = 0;
        for (int i = 25; i >= 0 && hash[i].first != 0; i--)
        {
            int k = hash[i].first;
            for (; j < n && k > 0; j += 2)
            {

                res[j] = hash[i].second;
                k--;
            }

            if ((j == n || j == n + 1) && res[1] == ' ')
                j = 1;

            for (; j < n && k > 0; j += 2)
            {

                res[j] = hash[i].second;
                k--;
            }
        }

        return res;
    }
};

//{ Driver Code Starts.

int checker(string str, string pat)
{
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    if (str.length() != pat.length())
        return 0;
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 97]--;
        if (pat[i] < 97 || pat[i] > 122)
            return 0;
        freq[pat[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
        if (freq[i] != 0)
            return 0;
    for (int i = 0; i < pat.length() - 1; i++)
        if (pat[i] == pat[i + 1])
            return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string str, ret;
        cin >> str;
        Solution ob;
        ret = ob.rearrangeString(str);
        cout << checker(str, ret) << endl;
    }
    return 0;
}
// } Driver Code Ends