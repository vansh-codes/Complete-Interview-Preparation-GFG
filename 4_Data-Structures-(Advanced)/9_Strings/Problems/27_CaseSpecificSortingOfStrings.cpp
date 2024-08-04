//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        // your code here
        map<char, int> upp;
        map<char, int> lpp;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                upp[s[i]]++;
                s[i] = '#';
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                lpp[s[i]]++;
                s[i] = '$';
            }
        }

        string u, l;

        for (auto i : upp)
        {
            while (i.second > 0)
            {
                u += i.first;
                i.second--;
            }
        }
        for (auto i : lpp)
        {
            while (i.second > 0)
            {
                l += i.first;
                i.second--;
            }
        }
        int count1 = 0, count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                s[i] = u[count1];
                count1++;
            }
            else if (s[i] == '$')
            {
                s[i] = l[count2];
                count2++;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        Solution obj;
        cout << obj.caseSort(str, n) << endl;
    }
}
// } Driver Code Ends