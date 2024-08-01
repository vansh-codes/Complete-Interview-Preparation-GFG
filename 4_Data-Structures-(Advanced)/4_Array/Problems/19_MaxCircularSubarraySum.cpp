//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
     int circularSubarraySum(int nums[], int n){
        int total = nums[0];
        int maxSum = nums[0] ,currMin = nums[0];
        int minSum = nums[0] ,currMax = nums[0];
        for(int i=1; i<n; i++){
            total += nums[i];

            currMin = min(currMin+nums[i],nums[i]);
            currMax = max(currMax+nums[i],nums[i]);

            maxSum = max(maxSum,currMax);
            minSum = min(minSum,currMin);
        }
        if(maxSum < 0) return maxSum;
        return max(total-minSum,maxSum);
    }

};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends