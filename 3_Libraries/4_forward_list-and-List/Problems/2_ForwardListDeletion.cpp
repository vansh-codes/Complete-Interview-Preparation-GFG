//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


// list: remove from front of list provided
void removeFromFront(forward_list<int> &list)
{
    if (!list.empty()) {
        list.pop_front();
    }
}

// Function to remove elements after the given position X
void removeAfter(forward_list<int> &list, int X)
{
    auto it = list.before_begin();
    for (int i = 0; i < X; ++i) {
        if (next(it) == list.end()) return; // If X is beyond the list size
        ++it;
    }
    if (next(it) != list.end()) {
        list.erase_after(it);
    }
}

// Function to remove elements from the list in the given range [start, end)
void removeFromInRange(forward_list<int> &list, int start, int end)
{
    if (start >= end) return;
    
    auto it1 = list.before_begin();
    auto it2 = list.before_begin();
    for (int i = 0; i < start; ++i) {
        if (next(it1) == list.end()) return; // If start is beyond the list size
        ++it1;
    }
    it2 = it1;
    for (int i = start; i < end; ++i) {
        if (next(it2) == list.end()) break; // If end is beyond the list size
        ++it2;
    }
    list.erase_after(it1, it2);
}

// Function to remove all elements from the list
void removeAll(forward_list<int> &list)
{
    list.clear();
}


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N, val;
        cin>>N;
        
        forward_list<int> list;
        
        for(int i = 1; i <= N; i++)
        {
            cin>>val;
            list.push_front(val);
        }
        
        int typeQuery;
        cin>> typeQuery;
        
        if(typeQuery == 1)
        {
            removeFromFront(list);
            
        }else if(typeQuery == 2)
        {
            int x;
            cin>>x;
            removeAfter(list, x);
        }else if(typeQuery == 3)
        {
            int start, end;
            cin>>start>>end;
            removeFromInRange(list, start, end);
        }
        else {
            removeAll(list);
        }
       
        
        if(list.empty())
            cout << "Empty" <<endl;
        else
        {
            for(int &temp : list)
            cout << temp << " ";
            cout <<endl;
            
        }
        
    }
}


// } Driver Code Ends