//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find out minimum steps Knight needs to reach target position.
    bool isValid(int x, int y, int N)
    {
        return (x >= 0 && x < N && y >= 0 && y < N);
    }

    int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
    {
        // Possible moves for the knight
        vector<pair<int, int>> moves = {
            {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

        // Convert 1-based indexing to 0-based
        int startX = KnightPos[0] - 1;
        int startY = KnightPos[1] - 1;
        int targetX = TargetPos[0] - 1;
        int targetY = TargetPos[1] - 1;

        // Queue for BFS
        queue<pair<pair<int, int>, int>> q;
        q.push({{startX, startY}, 0});

        // Visited array to keep track of visited positions
        vector<vector<bool>> visited(N, vector<bool>(N, false));
        visited[startX][startY] = true;

        while (!q.empty())
        {
            auto node = q.front();
            q.pop();

            int x = node.first.first;
            int y = node.first.second;
            int dist = node.second;

            // If reached the target position
            if (x == targetX && y == targetY)
            {
                return dist;
            }

            // Explore all possible moves
            for (auto move : moves)
            {
                int newX = x + move.first;
                int newY = y + move.second;

                if (isValid(newX, newY, N) && !visited[newX][newY])
                {
                    visited[newX][newY] = true;
                    q.push({{newX, newY}, dist + 1});
                }
            }
        }

        // If the target position is not reachable
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
        vector<int> KnightPos(2);
        vector<int> TargetPos(2);
        int N;
        cin >> N;
        cin >> KnightPos[0] >> KnightPos[1];
        cin >> TargetPos[0] >> TargetPos[1];
        Solution obj;
        int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends