//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*
V: vector needs to be heapified
*/
void heapify(vector<int> &V)
{
    // your code here
     make_heap(V.begin(), V.end()); // Transform V into a max heap
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
            cin>>V[i];
            
         heapify(V);
        for(auto itr = V.begin(); itr != V.end(); itr++)
        {
            cout << *itr << " ";
        }
        
        cout << endl;
    }
}



// } Driver Code Ends