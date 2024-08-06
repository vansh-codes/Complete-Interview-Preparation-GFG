//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>> &grid)
    {
        if (grid.empty() || grid[0].empty())
            return 0;

        int max_area = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        // Directions for 8 possible movements (horizontal, vertical, diagonal)
        vector<pair<int, int>> directions = {
            {-1, 0}, {1, 0}, {0, -1}, {0, 1}, // horizontal and vertical
            {-1, -1},
            {-1, 1},
            {1, -1},
            {1, 1} // diagonal
        };

        // Helper function to perform DFS
        function<int(int, int)> dfs = [&](int r, int c)
        {
            if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 0)
                return 0;

            // Mark the current cell as visited
            grid[r][c] = 0;
            int area = 1;

            // Explore all 8 directions
            for (auto &dir : directions)
            {
                int nr = r + dir.first;
                int nc = c + dir.second;
                area += dfs(nr, nc);
            }

            return area;
        };

        // Iterate through the grid to find the max area
        for (int r = 0; r < rows; ++r)
        {
            for (int c = 0; c < cols; ++c)
            {
                if (grid[r][c] == 1)
                {
                    int current_area = dfs(r, c);
                    max_area = max(max_area, current_area);
                }
            }
        }

        return max_area;
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
        int ans = obj.findMaxArea(grid);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends