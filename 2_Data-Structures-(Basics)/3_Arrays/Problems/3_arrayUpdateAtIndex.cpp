//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function 
void updateArray(int arr[], int index, int element){
    //Your code here
    arr[index] = element;
}


//{ Driver Code Starts.


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	int n;
    	int index;
    	int element;
    	cin >> n;
    	cin >> index;
    	cin >> element;
    
    	int arr[n];
    	
    	for(int i = 0;i<n;i++)
    	    arr[i] = i+1;
	
	updateArray(arr, index, element);
	
	cout << arr[index] <<endl;
	
	}
	
	return 0;
}
// } Driver Code Ends