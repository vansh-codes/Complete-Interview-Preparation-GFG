// User function template for C++

class Solution{
    
    private:
    
    bool isValid(int x, int y, int n){
        return x >= 0 && y >= 0 && x < n && y < n;
    }
    
    void f(int x, int y, int n, vector<vector<int>> &m, vector<string> &ans, vector<vector<bool>> &vis, string path){
        
        if(x == n - 1 && y == n - 1){
            ans.push_back(path);
            return;
        }
        
        vis[x][y] = 1;
        
        // Move in left
        if(isValid(x, y - 1, n) && m[x][y - 1] == 1 && !vis[x][y - 1]){
            path.push_back('L');
            f(x, y - 1, n, m, ans, vis, path);
            path.pop_back();
        }
        
        // Move in right
        if(isValid(x, y + 1, n) && m[x][y + 1] == 1 && !vis[x][y + 1]){
            path.push_back('R');
            f(x, y + 1, n, m, ans, vis, path);
            path.pop_back();
        }
        
        // Move in up
        if(isValid(x - 1, y, n) && m[x - 1][y] == 1 && !vis[x - 1][y]){
            path.push_back('U');
            f(x - 1, y, n, m, ans, vis, path);
            path.pop_back();
        }
        
        // Move in left
        if(isValid(x + 1, y, n) && m[x + 1][y] == 1 && !vis[x + 1][y]){
            path.push_back('D');
            f(x + 1, y, n, m, ans, vis, path);
            path.pop_back();
        }
        
        
        vis[x][y] = 0;
        
    }
    
    public:
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string> ans;
        if(m[0][0] == 0) return ans;
        
        vector<vector<bool>> vis(n, vector<bool>(n, 0));
        f(0, 0, n, m, ans, vis, "");
        return ans;
        
        
    }
};

    
