//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


//Function to traverse the Deque and print the elements of it.
void printDeque(deque<int> Deq)
{
    // your code here  
    for (int elem : Deq) {
        cout << elem << " ";
    }
    cout << endl;  // Print a newline after printing all elements
}    
    

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> Deq;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            Deq.push_back(val);
        }
        printDeque(Deq);
        
    }
}

// } Driver Code Ends