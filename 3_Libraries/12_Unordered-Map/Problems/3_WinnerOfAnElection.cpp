//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
  public:
    vector<string> winner(string arr[], int n)
    {
        unordered_map<string, int> votes;
        for (int i = 0; i < n; i++) {
            votes[arr[i]]++;
        }
        
        int max_votes = 0;
        string winner;
        for (auto it = votes.begin(); it!= votes.end(); it++) {
            if (it->second > max_votes) {
                max_votes = it->second;
                winner = it->first;
            } else if (it->second == max_votes) {
                if (it->first < winner) {
                    winner = it->first;
                }
            }
        }
        
        vector<string> result;
        result.push_back(winner);
        result.push_back(to_string(max_votes));
        
        return result;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends