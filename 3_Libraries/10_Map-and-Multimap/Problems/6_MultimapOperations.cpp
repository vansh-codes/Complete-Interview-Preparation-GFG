//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


multimap<int,int> multimapInsert(int arr[],int n);
void multimapDisplay(multimap<int,int>mp);
void multimapErase(multimap<int,int>&mp,int x);

// } Driver Code Ends
//User function Template for C++



multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   //Insert arr[i] as key and i as value in the multimap 
     for (int i = 0; i < n; i++) {
        mp.insert({arr[i], i});
    }
    return mp;
}


void multimapDisplay(multimap<int,int>mp)
{
    //Print the keys and value pairs in new line
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}


void multimapErase(multimap<int,int>&mp,int x)
{
   //If and else condition to erase x from the multimap
    int count = mp.count(x);
    if (count > 0) {
        mp.erase(x);
        cout << "erased " << x << endl;
    } else {
        cout << "not found" << endl;
    }
}

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Taking input array
        
        multimap<int,int>mp=multimapInsert(arr,n); //multimap insert function that returns a function
        multimapDisplay(mp); //print the keys and values of the multimap
        int x;
        cin>>x; //element to be erased
        
        multimapErase(mp,x); //the erase function
        multimapDisplay(mp);
        
        
    }
	return 0;
}
// } Driver Code Ends