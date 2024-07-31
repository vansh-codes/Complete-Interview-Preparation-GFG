//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    vector<string> result;
    queue<string> q;
    
    // Start with "1"
    q.push("1");
    
    while (N--) {
        string curr = q.front();
        q.pop();
        
        result.push_back(curr);
        
        // Append '0' and '1' to current string and enqueue
        q.push(curr + "0");
        q.push(curr + "1");
    }
    
    return result;
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
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends