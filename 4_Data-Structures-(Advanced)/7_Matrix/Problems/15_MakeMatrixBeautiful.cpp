//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        if (n <= 1) {
        return 0; // No operations needed for 1x1 matrix or smaller
    }
    
    vector<int> rowSum(n, 0);
    vector<int> colSum(n, 0);
    
    // Calculate current row and column sums
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    
    int maxSum = 0;
    
    // Find the maximum sum from rowSum and colSum
    for (int i = 0; i < n; ++i) {
        maxSum = max(maxSum, rowSum[i]);
        maxSum = max(maxSum, colSum[i]);
    }
    
    int minOperations = 0;
    
    // Calculate minimum operations required to make all rows and columns have sum equal to maxSum
    for (int i = 0; i < n; ++i) {
        minOperations += (maxSum - rowSum[i]);
        minOperations += (maxSum - colSum[i]);
    }
    
    return minOperations/2;

    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends