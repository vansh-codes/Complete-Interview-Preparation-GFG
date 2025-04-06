//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
bool isSafe(int x,int y,int n,int m)     {
    return x<n && y<m && x>=0 && y>=0;    }
long long numOfWays(int N, int M)
{
    long long ans=0;
    int m=1e9+7;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int cnt=0;
            if(isSafe(i+2,j+1,N,M)) cnt++;
            if(isSafe(i+2,j-1,N,M)) cnt++;
            if(isSafe(i-2,j+1,N,M)) cnt++;
            if(isSafe(i-2,j-1,N,M)) cnt++;
            if(isSafe(i+1,j+2,N,M)) cnt++;
            if(isSafe(i-1,j+2,N,M)) cnt++;
            if(isSafe(i-1,j-2,N,M)) cnt++;
            if(isSafe(i+1,j-2,N,M)) cnt++;
            ans=(ans%m+(N*M-cnt-1)%m)%m;
        }
    }
    return ans;       
}