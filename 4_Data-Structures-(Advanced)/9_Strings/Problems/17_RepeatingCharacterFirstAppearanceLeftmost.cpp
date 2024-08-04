//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        unordered_map<char, int>mp;
        for(int i =0; i < s.size(); i++)
            mp[s[i]]++;
            
        for(int i =0; i < s.size(); i++)
        {
            
            if(mp[s[i]] > 1)
                return i;
        }
        return -1;
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    Solution obj;
	    int index = obj.repeatedCharacter(s); 
        if (index == -1) 
            cout<<-1<<endl;
        else
            cout<<s[index]<<endl;
	}
	return 0;
}

// } Driver Code Ends