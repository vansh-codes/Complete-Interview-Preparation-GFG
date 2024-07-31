//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    static bool cmp(Item a, Item b) {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
    }
    
    // Function to get the maximum total value in the knapsack
    double fractionalKnapsack(int W, Item arr[], int n) {
        // Sort items according to value/weight ratio in descending order
        sort(arr, arr + n, cmp);
        
        int curWeight = 0; // Current weight in knapsack
        double finalValue = 0.0; // Result (value in knapsack)
    
        // Loop through all items
        for (int i = 0; i < n; i++) {
            // If adding the whole item won't overflow, add it completely
            if (curWeight + arr[i].weight <= W) {
                curWeight += arr[i].weight;
                finalValue += arr[i].value;
            } 
            // If we can't add the current item completely, add fractional part of it
            else {
                int remain = W - curWeight;
                finalValue += arr[i].value * ((double)remain / arr[i].weight);
                break;
            }
        }
        
        return finalValue;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends