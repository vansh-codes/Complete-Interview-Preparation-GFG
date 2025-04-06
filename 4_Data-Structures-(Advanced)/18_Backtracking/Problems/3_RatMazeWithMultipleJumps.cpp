

void print(int n, vector<vector<int>>& sol) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

bool safe(int x, int y, int n, vector<int> maze[]) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] != 0);
}

bool fn(vector<int> maze[], vector<vector<int>>& vis, int x, int y, int n) {
    if (x == n - 1 && y == n - 1) {
        vis[x][y] = 1;
        return true;
    }
    if (safe(x, y, n, maze) && !vis[x][y]) {
        vis[x][y] = 1;
        for (int i = 1; i <= maze[x][y] && i < n; i++) {
            if (fn(maze, vis, x, y + i, n)) return true;
            if (fn(maze, vis, x + i, y, n)) return true;
        }
        vis[x][y] = 0;
        return false;
    }
    return false;
}

vector<vector<int>> ShortestDistance(vector<int> maze[], int n) {
    vector<vector<int>> vis(n, vector<int>(n, 0));
    if (fn(maze, vis, 0, 0, n) == false) return {{-1}};
    return vis;
}

//Function to find the minimum number of Hops required for the rat to 
//reach from the source block to the destination block. 
void solve(int N, vector<int> maze[]) {
    vector<vector<int>> result = ShortestDistance(maze, N);
    if (result.size() == 1 && result[0].size() == 1 && result[0][0] == -1) {
        cout << -1 << endl;
    } else {
        print(N, result);  // Printing the solution path
    }
}