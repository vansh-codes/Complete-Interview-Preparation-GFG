//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string str3,str4;
        int n= str1.length();
        
        for(int i=2;i<n;i++)
        {
            str3 += str1[i];
        }
        
        str3+= str1[0];
        str3+= str1[1];
        
        str4 += str1[n-2];
        str4 += str1[n-1];
        
        for(int i=0;i<n-2;i++)
        {
            str4+=str1[i];
        }
        
        if(str2.compare(str3)==0 || str2.compare(str4)==0) return 1;
        return 0;
        
}
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends