//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the number of 'X' total shapes.
    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        // Check boundary conditions and if current cell is 'X'
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != 'X')
            return;

        // Mark the current cell as visited
        grid[i][j] = '#'; // Marking it visited

        // Explore all 4 directions
        dfs(grid, i + 1, j, n, m); // Down
        dfs(grid, i - 1, j, n, m); // Up
        dfs(grid, i, j + 1, n, m); // Right
        dfs(grid, i, j - 1, n, m); // Left
    }

    int xShape(vector<vector<char>> &grid)
    {
        if (grid.empty())
            return 0;

        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        // Traverse each cell in the grid
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == 'X')
                {
                    // Found a new 'X' shape, perform DFS to mark all connected 'X's
                    dfs(grid, i, j, n, m);
                    count++;
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
        int ans = obj.xShape(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends