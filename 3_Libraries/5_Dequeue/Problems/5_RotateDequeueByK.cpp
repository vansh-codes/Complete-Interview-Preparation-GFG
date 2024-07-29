//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
//Function to rotate deque by k places in anti-clockwise direction.
void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    // your code her
    k %= n; // Ensure k is within bounds of deque size
    while (k--) {
        deq.push_back(deq.front()); // Move front element to back
        deq.pop_front(); // Remove the front element
    }
    
}

//Function to rotate deque by k places in clockwise direction.
void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    // your code here
    k %= n; // Ensure k is within bounds of deque size
    while (k--) {
        deq.push_front(deq.back()); // Move back element to front
        deq.pop_back(); // Remove the back element
    }
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
        int rotateQuery, k;
        cin>>rotateQuery>>k;
        
        
        
        if(rotateQuery == 1)
            right_Rotate_Deq_ByK(deq, n, k);
            
        else left_Rotate_Deq_ByK(deq, n, k);
        
        
        for(auto itr = deq.begin(); itr != deq.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends