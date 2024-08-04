//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
// map<int, int> mp; // Global map to store numbers with only digits 1, 2, 3

// Function to perform DFS and find all numbers with digits {1, 2, 3}
void dfs(string num)
{
    if (!num.empty())
    {
        int val = stoi(num);
        if (val <= 1000000)
            mp[val] = 1; // Store valid number in the map
    }
    if (num.length() < 6)
    {
        dfs(num + "1");
        dfs(num + "2");
        dfs(num + "3");
    }
}
// Function to find all the numbers with only 1,2 and 3 in their digits.
void findAll()
{
    // code here
    dfs(""); // Start DFS with an empty string
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--)
    {
        vector<int> arr;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> result = ob.filterByDigits(arr);
        for (int x : result)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends