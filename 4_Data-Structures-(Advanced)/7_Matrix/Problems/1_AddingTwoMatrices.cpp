//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        int n1 = A.size();     // number of rows in A
    int m1 = A[0].size();  // number of columns in A
    int n2 = B.size();     // number of rows in B
    int m2 = B[0].size();  // number of columns in B
    
    // Check if dimensions match
    if (n1 != n2 || m1 != m2) {
        // Handle dimensions mismatch as needed
        return {};  // or throw an error, or handle in some appropriate way
    }
    
    // Initialize result matrix with dimensions n1 x m1
    vector<vector<int>> res(n1, vector<int>(m1));
    
    // Perform matrix addition
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < m1; ++j) {
            res[i][j] = A[i][j] + B[i][j];
        }
    }
    
    // Return the resulting matrix
    return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.sumMatrix(A,B);
        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends