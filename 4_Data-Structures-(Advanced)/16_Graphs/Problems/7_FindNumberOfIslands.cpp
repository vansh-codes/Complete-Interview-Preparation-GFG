//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>> &grid, int x, int y, int n, int m)
    {
        // If out of bounds or at water, return
        if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '0')
        {
            return;
        }

        // Mark the current cell as visited
        grid[x][y] = '0';

        // Explore all 8 possible directions
        dfs(grid, x + 1, y, n, m);
        dfs(grid, x - 1, y, n, m);
        dfs(grid, x, y + 1, n, m);
        dfs(grid, x, y - 1, n, m);
        dfs(grid, x + 1, y + 1, n, m);
        dfs(grid, x - 1, y - 1, n, m);
        dfs(grid, x + 1, y - 1, n, m);
        dfs(grid, x - 1, y + 1, n, m);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        if (n == 0)
            return 0;
        int m = grid[0].size();
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, i, j, n, m);
                    ++count;
                }
            }
        }

        return count;
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
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends