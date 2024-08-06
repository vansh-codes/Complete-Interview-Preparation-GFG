//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>> &grid)
    {
        int n = grid.size();
        if (n == 0)
            return false;

        // Directions for moving up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        // Find the source (1)
        pair<int, int> source;
        pair<int, int> destination;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                {
                    source = {i, j};
                }
                else if (grid[i][j] == 2)
                {
                    destination = {i, j};
                }
            }
        }

        // BFS to find the path from source to destination
        queue<pair<int, int>> q;
        q.push(source);
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        visited[source.first][source.second] = true;

        while (!q.empty())
        {
            pair<int, int> current = q.front();
            q.pop();

            // If we reached the destination
            if (grid[current.first][current.second] == 2)
                return true;

            // Explore all 4 directions
            for (auto direction : directions)
            {
                int newX = current.first + direction.first;
                int newY = current.second + direction.second;

                // Check if new position is within bounds and is not a wall and not visited
                if (newX >= 0 && newX < n && newY >= 0 && newY < n && grid[newX][newY] != 0 && !visited[newX][newY])
                {
                    visited[newX][newY] = true;
                    q.push({newX, newY});
                }
            }
        }

        // If we exhaust the search without finding the destination
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        bool ans = obj.is_Possible(grid);
        cout << ((ans) ? "1\n" : "0\n");
    }
    return 0;
}
// } Driver Code Ends