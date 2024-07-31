//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if (str1.length() != str2.length()) {
            return false;
        }
        
        int count[26] = {0};
        for (int i = 0; i < str1.length(); i++) {
            count[str1[i] - 'a']++;
            count[str2[i] - 'a']--;
        }
        
        int diff = 0;
        for (int i = 0; i < 26; i++) {
            diff += abs(count[i]);
        }
        
        return diff / 2 <= k;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends