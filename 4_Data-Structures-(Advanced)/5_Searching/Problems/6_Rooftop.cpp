//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N) {
        int max_steps = 0;  // To store the maximum steps with increasing height
        int current_steps = 0;  // To store the current count of steps with increasing height
    
        for (int i = 1; i < N; i++) {
            if (A[i] > A[i-1]) {
                current_steps++;  // Increment the count if current building is taller than previous
            } else {
                max_steps = max(max_steps, current_steps);  // Update max_steps if current_steps is greater
                current_steps = 0;  // Reset current_steps for the next possible sequence
            }
        }
    
        // Update max_steps in case the longest sequence is at the end of the array
        max_steps = max(max_steps, current_steps);
    
        return max_steps;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends