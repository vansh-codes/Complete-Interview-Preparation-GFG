//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    bool increasingOrder(int arr[], int n){
        for(int i=1;i<n-1;i++){
            if(arr[i] < arr[i-1]){
                return false;
            }
        }
      return true;
    }
    
    bool decreasingOrder(int arr[], int n){
        for(int i=1;i<n-1;i++){
            if(arr[i] > arr[i-1]){
                return false;
            }
        }
      return true;
    }
    
    int isSorted(int arr[],int n)
    {
      
      //Your code here
      if(n<=1) return 1;
      if(n==2) return 1;
      return (increasingOrder(arr,n) || decreasingOrder(arr,n));
       
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends