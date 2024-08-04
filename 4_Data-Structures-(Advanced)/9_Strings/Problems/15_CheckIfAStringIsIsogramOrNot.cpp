//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
   bool isIsogram(string s)
    {
        int count=0;
        sort(s.begin(),s.end());       //Initially sort the string
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])                     //Check the occurence of currect character and previous character , if they are same it means string is not isogram and increment count by 1
            {
                count++;
            }
        }
        if(count==0)      //If count is 0 , it means there are no similar characters in string
        {
            return true;
        }
        else
        {
            return false;
        }
    }

 
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends