//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to detect cycle in a directed graph.

    bool dfs(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &recStack)
    {
        // Mark the current node as visited and part of the recursion stack
        visited[node] = true;
        recStack[node] = true;

        // Recur for all the vertices adjacent to this vertex
        for (int neighbor : adj[node])
        {
            // If the adjacent vertex is not visited, recursively visit it
            if (!visited[neighbor])
            {
                if (dfs(neighbor, adj, visited, recStack))
                {
                    return true;
                }
            }
            // If the adjacent vertex is in the recursion stack, a cycle is found
            else if (recStack[neighbor])
            {
                return true;
            }
        }

        // Remove the current node from the recursion stack
        recStack[node] = false;
        return false;
    }

    bool isCyclic(int V, vector<int> adj[])
    {
        // Initialize visited and recursion stack arrays
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);

        // Call the recursive helper function to detect a cycle in different DFS trees
        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                if (dfs(i, adj, visited, recStack))
                {
                    return true;
                }
            }
        }

        return false;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends