//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr)
    {
        // code here
        unordered_map<int, int> indexMap; // Map to store element and its first index

        int firstRepeatIndex = -1;

        for (int i = 0; i < arr.size(); ++i)
        {
            if (indexMap.find(arr[i]) != indexMap.end())
            {
                // Element found in map, it's repeating
                int firstOccurIndex = indexMap[arr[i]];
                if (firstRepeatIndex == -1 || firstOccurIndex < firstRepeatIndex)
                {
                    firstRepeatIndex = firstOccurIndex;
                }
            }
            else
            {
                // Element not found in map, store its index
                indexMap[arr[i]] = i + 1; // Store index in 1-based indexing
            }
        }

        return firstRepeatIndex;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    cin.ignore();
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
        cout << ob.firstRepeated(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends