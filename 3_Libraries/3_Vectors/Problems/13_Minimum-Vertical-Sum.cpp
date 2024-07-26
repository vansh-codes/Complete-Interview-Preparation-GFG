//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int minimum_vertical_sum(vector<vector<int>>v)
{
    //Your code here
    int minSum = INT_MAX;
    int maxRows = 0;

    // Find the maximum number of rows in the vectors
    for (auto& vec : v) {
        maxRows = max(maxRows, static_cast<int>(vec.size()));
    }

    // Iterate through each column
    for (int col = 0; col < maxRows; ++col) {
        int sum = 0;
        // Sum up the elements in the current column
        for (int row = 0; row < v.size(); ++row) {
            if (col < v[row].size()) {
                sum += v[row][col];
            }
        }
        // Update the minimum vertical sum found so far
        if (sum < minSum) {
            minSum = sum;
        }
    }

    return minSum;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<vector<int>>v;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        vector<int>temp;
	        for(int j=0;j<m;j++)
	        {
	            int k;
	            cin>>k;
	            temp.push_back(k);
	        }
	        v.push_back(temp);
	    }
	    int min_sum=minimum_vertical_sum(v);
	    cout<<min_sum<<endl;
	}
	return 0;
}

// } Driver Code Ends