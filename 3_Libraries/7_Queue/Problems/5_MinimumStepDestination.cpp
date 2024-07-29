//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int minimum_distance(int sx,int sy,int dx,int dy)
{
    // Your code here
    if (sx > dx || sy > dy) {
        return -1; // no path exists
    }
    return abs(dx - sx) + abs(dy - sy);
}

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t-->0){
       
       int sx,sy;
       cin>>sx>>sy;
       int dx,dy;
       cin>>dx>>dy;
       
       int dis = minimum_distance(sx,sy,dx,dy);
       cout<<dis<<endl;
    }
}
// } Driver Code Ends