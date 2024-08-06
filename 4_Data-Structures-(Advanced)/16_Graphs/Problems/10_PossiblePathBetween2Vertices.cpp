//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count paths between two vertices in a directed graph.
    int countPathsUtil(int node, int destination, vector<int> adj[], vector<int> &dp)
    {
        // If the destination is reached, return 1
        if (node == destination)
            return 1;

        // If the current node's path count is already computed, return it
        if (dp[node] != -1)
            return dp[node];

        int pathCount = 0;
        // Recur for all adjacent nodes
        for (int neighbor : adj[node])
        {
            pathCount += countPathsUtil(neighbor, destination, adj, dp);
        }

        // Store the result in dp array
        dp[node] = pathCount;
        return pathCount;
    }

    int countPaths(int V, vector<int> adj[], int source, int destination)
    {
        vector<int> dp(V, -1); // dp array to store the count of paths from each node
        return countPathsUtil(source, destination, adj, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}
// } Driver Code Ends