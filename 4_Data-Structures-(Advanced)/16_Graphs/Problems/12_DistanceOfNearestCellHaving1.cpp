//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dist(n, vector<int>(m, -1)); // Initialize distances to -1

        queue<pair<int, int>> q;

        // Enqueue all cells containing 1
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }

        // Directions for moving in 4 possible directions: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        // Perform BFS
        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
            int ci = curr.first;
            int cj = curr.second;

            // Explore neighbors
            for (auto dir : directions)
            {
                int ni = ci + dir.first;
                int nj = cj + dir.second;

                // Check if the neighbor is within bounds and not visited yet
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && dist[ni][nj] == -1)
                {
                    dist[ni][nj] = dist[ci][cj] + 1;
                    q.push({ni, nj});
                }
            }
        }

        return dist;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends