//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string caseConversion(string str){
        //Your code here
        for (int i = 0; i < str.length(); ++i) {
            // Convert lowercase letters to uppercase
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = tolower(str[i]);
            }
        }
        return str;
        
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
	cout << obj.caseConversion(s) << endl;
	
	}
	
	return 0;
	
}


// } Driver Code Ends