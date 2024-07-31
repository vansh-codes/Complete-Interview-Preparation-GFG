//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*
V: remove elements from this vector within range
start: starting position
end: end position
*/
void removeWithinRange(vector<int> &V, int start, int end)
{
    // your code here
    V.erase(V.begin() + start, V.begin() + end);
}

//{ Driver Code Starts.
int main()
{
    int t; cin>> t;
    while(t--)
    {
        
        int n;
        cin>>n;
        
        vector<int> V(n);
        for(int i = 0; i  < n; i++)
         cin >> V[i];
        
        int start, end;
        cin>>start>>end;
        
        removeWithinRange(V, start, end);
        if(V.size() == 0)
            cout << "Empty" <<endl;
        else
        {
            for(auto itr = V.begin(); itr != V.end(); itr++)
                cout << *itr << " ";
            cout << endl;
        }
    }
}


// } Driver Code Ends