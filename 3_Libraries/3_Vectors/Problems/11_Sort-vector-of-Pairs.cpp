//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second; // Sort by second element in descending order
    } else {
        return a.first > b.first;   // If second elements are equal, sort by first element in descending order
    }
}

//Complete this function
vector<pair<int,int>> sortBySecond(vector<pair<int,int>> v)
{
    //Your code here
    sort(v.begin(), v.end(), comparePairs);
    return v;
}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v;
	    
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        int h;
	        cin>>a>>h;
	        
	        v.push_back({a,h});
	    }
	    
	    
	    vector<pair<int,int>>temp = sortBySecond(v);
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<"("<<temp[i].first<<","<<temp[i].second<<") ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}


// } Driver Code Ends