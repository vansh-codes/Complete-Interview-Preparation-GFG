//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int countVowels(string str){
        
       //Your code here
        // Define a set of vowels
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        
        // Set to store distinct vowels found
        unordered_set<char> distinctVowels;
        
        // Iterate through the string
        for (char c : str) {
            // Check if the character is a vowel
            if (vowels.find(c) != vowels.end()) {
                distinctVowels.insert(c);
            }
        }
        
        // Return the size of the set which represents distinct vowels count
        return distinctVowels.size();
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
	cout << obj.countVowels(s) << endl;
	
	}
	return 0;
	
}


// } Driver Code Ends