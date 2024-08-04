//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string missingPanagram(string str)
    {

        // Your code here
        unordered_set<char> seen;

        // Populate the set with characters present in the input string
        for (char ch : str)
        {
            if (isalpha(ch))
            {                             // Check if character is alphabetic
                seen.insert(tolower(ch)); // Convert to lowercase and insert
            }
        }

        string result;

        // Iterate over all lowercase alphabets 'a' to 'z'
        for (char ch = 'a'; ch <= 'z'; ++ch)
        {
            if (seen.find(ch) == seen.end())
            {                 // If character not found in set
                result += ch; // Add it to the result string
            }
        }

        // Sort the result string lexicographically
        sort(result.begin(), result.end());

        // Return -1 if result is empty, otherwise return the result string
        return result.empty() ? "-1" : result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.missingPanagram(s) << endl;
    }
    return 0;
}

// } Driver Code Ends