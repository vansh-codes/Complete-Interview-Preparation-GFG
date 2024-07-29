//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string TieBreak(string names[], int n)
    {
        unordered_map<string, int> votes;
        for (int i = 0; i < n; i++) {
            votes[names[i]]++;
        }
        
        int max_votes = 0;
        string winner;
        for (auto it = votes.begin(); it != votes.end(); it++) {
            if (it->second > max_votes) {
                max_votes = it->second;
                winner = it->first;
            } else if (it->second == max_votes) {
                if (it->first < winner) {
                    winner = it->first;
                }
            }
        }
        
        return winner;
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
        
        string names[n];
        for(int i = 0; i < n; i++)
            cin>>names[i];
        Solution ob;
        cout << ob.TieBreak(names,n) <<endl; 
    }
}

// } Driver Code Ends