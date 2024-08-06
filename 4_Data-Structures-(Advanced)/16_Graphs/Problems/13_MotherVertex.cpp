//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find a Mother Vertex in the Graph.
    void dfs(int v, vector<int> adj[], vector<bool> &visited, stack<int> &stk)
    {
        visited[v] = true;
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                dfs(u, adj, visited, stk);
            }
        }
        stk.push(v);
    }

    bool isReachable(int v, vector<int> adj[], vector<bool> &visited)
    {
        visited[v] = true;
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                isReachable(u, adj, visited);
            }
        }
        for (int i = 0; i < visited.size(); ++i)
        {
            if (!visited[i])
            {
                return false;
            }
        }
        return true;
    }

    int findMotherVertex(int V, vector<int> adj[])
    {
        vector<bool> visited(V, false);
        stack<int> stk;

        // Step 1: Perform DFS to fill the stack
        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                dfs(i, adj, visited, stk);
            }
        }

        // Step 2: Initialize visited for reverse DFS
        fill(visited.begin(), visited.end(), false);

        // Step 3: Get the last finished vertex from the stack
        int last_v = stk.top();
        stk.pop();

        // Step 4: Check if last_v is a mother vertex
        if (!isReachable(last_v, adj, visited))
        {
            return -1;
        }

        return last_v;
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
        }
        Solution obj;
        int ans = obj.findMotherVertex(V, adj);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends