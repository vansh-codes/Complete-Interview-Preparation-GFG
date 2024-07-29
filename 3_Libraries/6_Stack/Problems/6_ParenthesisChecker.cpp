//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool isMatchingPair(char opening, char closing) {
        if (opening == '(' && closing == ')') return true;
        if (opening == '{' && closing == '}') return true;
        if (opening == '[' && closing == ']') return true;
        return false;
    }

    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
    
        for (char c : x) {
            if (c == '(' || c == '{' || c == '[') {
                s.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (s.empty() || !isMatchingPair(s.top(), c)) {
                    return false;
                }
                s.pop();
            }
        }
    
        return s.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends