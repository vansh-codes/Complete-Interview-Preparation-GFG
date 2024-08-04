//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
   {
       // Your code here
       if(s1.size()!=s2.size())
       return 0;
       
       s1 =s1+s1;
       if(s1.find(s2) == -1){
           return 0;
       }
       else
       return 1; 
     }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends