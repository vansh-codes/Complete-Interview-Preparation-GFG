//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void iter(vector<int>::iterator it1,vector<int>::iterator it2);


// } Driver Code Ends
//User function Template for C++

//Complete this function. it1 points to vector.begin(), it2 points to vector.end()
void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    for (auto it = it1; it != it2; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    iter(v.begin(),v.end()); //passing begin and end addresses of vector to the function
	   
	}
	return 0;
}


// } Driver Code Ends