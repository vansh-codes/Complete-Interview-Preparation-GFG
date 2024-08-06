//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return list containing vertices in Topological order.
    void dfs(int node, vector<int> adj[], vector<bool> &visited, stack<int> &Stack)
    {
        // Mark the current node as visited
        visited[node] = true;

        // Recur for all the vertices adjacent to this vertex
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                dfs(neighbor, adj, visited, Stack);
            }
        }

        // Push the current vertex to stack which stores the result
        Stack.push(node);
    }

    // Function to return list containing vertices in Topological order
    vector<int> topoSort(int V, vector<int> adj[])
    {
        stack<int> Stack;
        vector<bool> visited(V, false);
        vector<int> result;

        // Call the recursive helper function to store Topological Sort
        // starting from all vertices one by one
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfs(i, adj, visited, Stack);
            }
        }

        // Pop all the vertices from the stack and add to the result
        while (!Stack.empty())
        {
            result.push_back(Stack.top());
            Stack.pop();
        }

        return result;
    }
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
 *   contains the elements in topological sorted form
 *   V: number of vertices
 *   *res: array containing elements in topological sorted form
 *   adj[]: graph input
 */
int check(int V, vector<int> &res, vector<int> adj[])
{

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++)
    {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++)
    {
        for (int v : adj[i])
        {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }

    return 0;
}
// } Driver Code Ends