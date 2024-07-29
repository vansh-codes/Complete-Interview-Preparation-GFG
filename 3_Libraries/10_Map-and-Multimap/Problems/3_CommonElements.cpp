//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        map<int, int> freq1, freq2;
    for (int i = 0; i < v1.size(); i++) {
        freq1[v1[i]]++;
    }
    for (int i = 0; i < v2.size(); i++) {
        freq2[v2[i]]++;
    }

    vector<int> common;
    for (auto it = freq1.begin(); it!= freq1.end(); it++) {
        if (freq2.find(it->first)!= freq2.end()) {
            for (int i = 0; i < min(it->second, freq2[it->first]); i++) {
                common.push_back(it->first);
            }
        }
    }

    sort(common.begin(), common.end());
    return common;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends