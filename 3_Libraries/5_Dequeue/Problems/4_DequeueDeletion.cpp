//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
//Function to erase the element from specified position X in deque.
void eraseAt(deque <int> &deq, int X)
{
    // your code here
    if (X >= 0 && X < deq.size()) {
        deq.erase(deq.begin() + X);
    }
}

//Function to erase the elements in range start (inclusive), end (exclusive).
void eraseInRange(deque<int> &deq, int start, int end)
{
    // your code here
    // Check if start and end are within the valid range
    if (start >= 0 && start < deq.size() && end > start && end <= deq.size()) {
        deq.erase(deq.begin() + start, deq.begin() + end);
    }
}

//Function to erase all the elements in the deque.
void eraseAll(deque<int> &deq)
{
   // your code here
   deq.clear();
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
        
        deque<int> deq;
        for(int i = 1; i <= n; i++)
        {
            int val;
            cin>>val;
            deq.push_back(val);
        }
        
        int eraseQuery;
        cin>>eraseQuery;
        
        if(eraseQuery == 1)
        {
            int pos;
            cin>>pos;
            eraseAt(deq, pos);
        }
        else if(eraseQuery == 2)
        {
            int start, end;
            cin>>start>>end;
            eraseInRange(deq, start, end);
        }
        else
        {
            eraseAll(deq);
            
        }
        
        
        if(deq.empty())
            cout << "Empty";
        else
            {for(auto itr = deq.begin(); itr != deq.end(); itr++)
                cout << *itr << " ";}
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends