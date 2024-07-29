//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function
bool BinarySearch(vector<int> vec, int K) {
    int low = 0, high = vec.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (vec[mid] == K)
            return true;
        else if (vec[mid] < K)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N, K;
        cin>>N>>K;
        
        vector<int> vec(N);
        for(int i = 0; i < N; i++)
        {
            int x;
            cin>>x;
            vec[i] = x;
        }
        
        cout << BinarySearch(vec, K) <<endl;
    }
}


// } Driver Code Ends