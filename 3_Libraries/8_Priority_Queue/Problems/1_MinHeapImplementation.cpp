//{ Driver Code Starts
//Initial Template for C++
// CPP code to implement functions of priority_queue
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* Function to implement push operation in priority_queue
* pq : priority_queue
* x : element to be pushed
*/
void push_pq(priority_queue<int, vector<int>, greater<int>> &pq, int x){
    
    // Your code here
    pq.push(x);
    // cout << pq.size() << endl;
}

/* Function to implement pop operation in priority_queue
* pq : priority_queue
*/
void pp_pq(priority_queue<int, vector<int>, greater<int>> &pq){
   
    if(!pq.empty())
        pq.pop();
    /*Your code here*/
    else
        return;
        
    // if (!pq.empty()) {
    // }
    // cout << pq.size() << endl;
    
}

/* Function to implement top operation in priority_queue
* pq : priority_queue
*/
int pq_top(priority_queue<int, vector<int>, greater<int>> &pq){
    
    if(!pq.empty())
    /*Your code here*/
        return pq.top();
    else
        return -1;
    
}

//{ Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	// Declaring priority queue
	priority_queue<int, vector<int>, greater<int>> pq; 
	
	while(testcase--){
	    // Queries input
	    int queries;
	    cin >> queries;
	    
	    while(queries--){
	        
	        string s;
	        cin >> s;
	        
	        // If query is to push
	        if(s == "p"){
	            int x;
	            cin >> x;
	            push_pq(pq, x);
	            cout << pq.size() << endl;
	        }
	        
	        // If query is to pop
	        if(s == "pp"){
	            pp_pq(pq);
	            
	            cout << pq.size() << endl;
	        }
	        
	        // If query is to return top
	        if(s == "t"){
	            cout << pq_top(pq) << endl;
	        }
	    }
	    
	    // resetting priority queue
	    pq = priority_queue <int, vector<int>, greater<int>>();
	}
	
	return 0;
}
// } Driver Code Ends