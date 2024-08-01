//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void reverseInGroups(vector<long long int> &arr, int k) {
        int n = arr.size();
        
        // Iterate through the array in steps of k
        for (int i = 0; i < n; i += k) {
            // Determine the end of the current group
            int left = i;
            int right = min(i + k - 1, n - 1);
            
            // Reverse the elements in the current group
            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<long long int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.reverseInGroups(arr, k);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends