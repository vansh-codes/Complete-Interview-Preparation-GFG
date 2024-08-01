//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    
    int countOccurence(int arr[], int n, int k) {
        // Calculate the threshold for frequency
        int threshold = n / k;
    
        // Create a hashmap to store the frequency of each element
        std::unordered_map<int, int> frequency;
    
        // Populate the frequency map
        for (int i = 0; i < n; i++) {
            frequency[arr[i]]++;
        }
    
        // Count elements that appear more than n/k times
        int count = 0;
        for (auto it : frequency) {
            if (it.second > threshold) {
                count++;
            }
        }
    
        return count;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends