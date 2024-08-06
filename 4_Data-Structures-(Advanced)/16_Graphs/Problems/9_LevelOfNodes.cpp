//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int X)
    {
        // If the node X is greater than or equal to the number of vertices, return -1
        if (X >= V)
            return -1;

        vector<bool> visited(V, false);
        queue<pair<int, int>> q; // pair<node, level>

        // Start BFS from node 0
        q.push({0, 0});
        visited[0] = true;

        while (!q.empty())
        {
            auto front = q.front();
            q.pop();

            int node = front.first;
            int level = front.second;

            // If we found the node X
            if (node == X)
                return level;

            // Explore all the adjacent nodes
            for (int neighbor : adj[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push({neighbor, level + 1});
                }
            }
        }

        // If we exhausted the BFS without finding the node X
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E, X;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin >> X;

        Solution obj;
        cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

// } Driver Code Ends