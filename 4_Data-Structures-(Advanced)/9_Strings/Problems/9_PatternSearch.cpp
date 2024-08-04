//{ Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

class Solution{
  public:
    bool search(string pat, string txt) 
    { 
        int M = pat.length();
        int N = txt.length();
        
        vector<int> lps(M, 0);
        
        int j = 0;
        
        computeLPSArray(pat, M, lps);
        
        int i = 0;
        
        while (i < N) {
            if (pat[j] == txt[i]) {
                j++;
                i++;
            }
            
            if (j == M) {
                return true;
            }
            
            else if (i < N && pat[j]!= txt[i]) {
                if (j!= 0)
                    j = lps[j - 1];
                else
                    i = i + 1;
            }
        }
        
        return false;
    }
    
    void computeLPSArray(string pat, int M, vector<int>& lps) {
        int len = 0;
        
        lps[0] = 0;
        
        int i = 1;
        
        while (i < M) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            
            else {
                if (len!= 0)
                    len = lps[len - 1];
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
};




//{ Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}
// } Driver Code Ends