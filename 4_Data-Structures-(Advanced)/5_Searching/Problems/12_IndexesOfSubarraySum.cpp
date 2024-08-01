//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
         int j=0;
         long long sum =0;
           vector<int>ans;
         for(int i=0;i<arr.size();i++){
             sum = sum+arr[i]; // Add current element to sum
             
              // If sum exceeds s, remove elements from the start until sum <= s
             while(sum>s && j<i){
                 sum = sum-arr[j];
                 j++;
             }
              // If sum equals s, store the indices and break
             if(sum == s){
                 ans.push_back(j+1);
                 ans.push_back(i+1);
                 break;
             }
             
         }
          // If ans is empty, return {-1} indicating no subarray found
         if(ans.size() == 0){
             return {-1};
         }
              return ans;
         
    }

};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends