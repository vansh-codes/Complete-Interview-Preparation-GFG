//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int> s;
        int n = q.size();
        
        // Dequeue k elements from the front of the queue and push them onto the stack
        for (int i = 0; i < k; i++) {
            s.push(q.front());
            q.pop();
        }
        
        // Enqueue the elements from the stack back into the queue in reverse order
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }
        
        // Enqueue the remaining elements from the original queue
        for (int i = k; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
        
        return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends