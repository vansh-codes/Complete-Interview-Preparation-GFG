//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
    bool find(string s, int l, int h){
        if(l>=h) return true;
        if(s[l]!=s[h]) return false;
        return find(s,l+1,h-1); 
    }
    
    bool isPalin(int N)
    {
        //Your code here
        //You may use a helper function if you like
        string s = to_string(N);
        bool check = find(s,0,s.size()-1);
        return check;
    }
};

//{ Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends