//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>&a) 
    { 
        int n = a.size();
        vector<int>max_arr(n,0);
        vector<int>min_arr(n,0);
        int maxi = INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,a[i]);
            max_arr[i]=maxi;
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,a[i]);
            min_arr[i]=mini;
        }
        int ans =-1;
        int i=0,j=0;
        while(i<n && j<n){
            if(max_arr[j]>=min_arr[i]){
                ans=max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }


};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends