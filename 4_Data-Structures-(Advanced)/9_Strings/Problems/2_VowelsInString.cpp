//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int countVowels(string str)
{
    // count number of vowels present in string
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    
    int count = 0;
    
    // Iterate through the string
    for (char c : str) {
        // Check if the character is a vowel
        if (vowels.find(c) != vowels.end()) {
            count++;
        }
    }
    
    return count;
}

//{ Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin >> str;
	    cout << countVowels(str) << endl;
	}
}
// } Driver Code Ends