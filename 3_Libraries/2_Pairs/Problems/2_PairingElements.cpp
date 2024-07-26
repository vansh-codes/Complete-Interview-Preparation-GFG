//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

/*
array_of_Pairs(arr, N): function which returns the array of pairs
arr[]: contains elements of given array
N: sze of array
*/
vector<pair<int, int>> array_of_Pairs(int arr[], int N)
{
    // your code here
    
    //Return a vector of pairs
    
    vector<pair<int, int>> pairs;

    int left = 0;
    int right = N - 1;

    while (left <= right) {
        if (left == right) {
            // Middle element pairs with itself
            pairs.push_back(make_pair(arr[left], arr[right]));
        } else {
            // Pair elements symmetrically
            pairs.push_back(make_pair(arr[left], arr[right]));
            // pairs.push_back(make_pair(arr[right], arr[left]));
        }
        left++;
        right--;
    }

    return pairs;
    
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N;
        
        // Input size of array
        cin>>N;
        
        int arr[N];
        // Input array elements 
        for(int i = 0; i < N; i++)
            cin>>arr[i];
        
        // Store the result in vector of pair
        vector<pair<int, int>> res = array_of_Pairs(arr, N);
        
        for(int i = 0; i < res.size(); i++)
        {
            cout << "("<< res[i].first << "," <<res[i].second << ") ";
        }
        cout << endl;
        
    }
    return 0;
}