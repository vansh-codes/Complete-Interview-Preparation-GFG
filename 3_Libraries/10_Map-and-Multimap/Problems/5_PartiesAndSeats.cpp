//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    //Your code here
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++) {
        string s(1, party[i]);
        v.push_back({s, seats[i]});
    }
    sort(v.begin(), v.end());
    int max_seats = max_element(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) {
        return a.second < b.second;
    })->second;
    for (auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
    cout << max_seats << endl;
}

//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}
// } Driver Code Ends