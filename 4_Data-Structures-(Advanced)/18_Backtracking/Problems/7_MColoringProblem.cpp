
class Solution{
    
    private:
    
    bool isSafe(int &u, int &c, int n, bool graph[101][101], vector<int> &color){
        
        for(int i=0; i<n; i++){
            
            if(u != i && graph[u][i] && color[i] == c){
                return false;
            }
            
        }
        
        return true;
        
    }
    
    bool f(int u, bool graph[101][101], vector<int> &color, int m, int n){
        
        if(u == n) return true;
        
        // Try all colors to u
        for(int c=0; c<m; c++){
            if(isSafe(u, c, n, graph, color)){
                color[u] = c;
                if(f(u + 1, graph, color, m, n))
                   return true;
                color[u] = -1;
            }
        }
        
        return false;
        
    }
    
    public:
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        
        vector<int> color(n, -1);
        return f(0, graph, color, m, n);
        
    }
};