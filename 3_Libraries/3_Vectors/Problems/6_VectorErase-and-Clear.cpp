//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void eraseAt(vector<int> &V, int pos) {
    V.erase(V.begin() + pos);
}

void eraseInRange(vector<int> &V, int start, int end) {
    V.erase(V.begin() + start, V.begin() + end);
}

void clearAll(vector<int> &V) {
    V.clear();
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
            cin>>V[i];
        
        int Erasetype;
        cin>>Erasetype;
        
        if(Erasetype == 1)
        {
            clearAll(V);
        }
        else if(Erasetype == 2)
        {
            int pos;
            cin>>pos;
            eraseAt(V, pos);
            
        }
        else{
            int start, end;
            cin>>start>>end;
            eraseInRange(V, start, end);
        }
         if(V.empty())
            cout << "Empty" <<endl;
          else
          {
              for(auto itr = V.begin(); itr != V.end(); itr++)
               cout << *itr << " ";
               cout << endl;
          }
    }
}



// } Driver Code Ends