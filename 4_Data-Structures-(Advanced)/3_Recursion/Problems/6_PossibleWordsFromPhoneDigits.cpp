//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find list of all words possible by pressing given numbers.
    void solve(vector<int> digits, vector<string> &ans, vector<string> mapping, string output, int index)
    {
        if (index >= digits.size())
        {
            ans.push_back(output);
            return;
        }
        int number = digits[index];
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digits, ans, mapping, output, index + 1);
            output.pop_back();
        }
    }

public:
    vector<string> possibleWords(int a[], int N)
    {
        vector<int> digits(a, a + N);
        vector<string> ans;
        if (N <= 0)
            return ans;
        string output;
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, ans, mapping, output, 0);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int T;

    cin >> T; // testcases

    while (T--)
    { // while testcases exist
        int N;

        cin >> N; // input size of array

        int a[N]; // declare the array

        for (int i = 0; i < N; i++)
        {
            cin >> a[i]; // input the elements of array that are keys to be pressed
        }

        Solution obj;

        vector<string> res = obj.possibleWords(a, N);
        for (string i : res)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends