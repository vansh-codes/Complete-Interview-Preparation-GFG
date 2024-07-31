//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool isPanagram(string str){
    
    //Your code here
    vector<bool> visited(26, false);
    for (char ch : str) {
        if (isalpha(ch)) {
            int index = tolower(ch) - 'a';
            visited[index] = true;
        }
    }
    for (bool val : visited) {
        if (!val) {
            return false;
        }
    }
    return true;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	Solution obj;
	cout << obj.isPanagram(s) << endl;
	}
	
	return 0;
	
}


// } Driver Code Ends