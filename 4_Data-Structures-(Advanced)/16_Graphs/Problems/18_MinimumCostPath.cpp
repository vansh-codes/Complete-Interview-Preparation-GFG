//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to return the minimum cost to react at bottom
    // right cell from top left cell.
    int minimumCostPath(vector<vector<int>> &grid)
    {
        int N = grid.size();
        vector<vector<int>> cost(N, vector<int>(N, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        // Possible moves: right, left, down, up
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        // Start from the top-left cell
        pq.push({grid[0][0], {0, 0}});
        cost[0][0] = grid[0][0];

        while (!pq.empty())
        {
            auto node = pq.top();
            pq.pop();

            int currentCost = node.first;
            int x = node.second.first;
            int y = node.second.second;

            // If reached the bottom-right cell
            if (x == N - 1 && y == N - 1)
            {
                return currentCost;
            }

            // Explore all possible moves
            for (auto dir : directions)
            {
                int newX = x + dir.first;
                int newY = y + dir.second;

                if (newX >= 0 && newX < N && newY >= 0 && newY < N)
                {
                    int newCost = currentCost + grid[newX][newY];
                    if (newCost < cost[newX][newY])
                    {
                        cost[newX][newY] = newCost;
                        pq.push({newCost, {newX, newY}});
                    }
                }
            }
        }

        // If bottom-right cell is not reachable (though in the given problem, it always should be)
        return -1;
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
        int ans = obj.minimumCostPath(grid);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends