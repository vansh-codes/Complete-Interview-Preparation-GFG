//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

//Complete this function
class Solution{
  public:
    void reverseArray(int n, int* arr){
        
      //Your code here
        stack<int> stk;
        
        // Push all elements of the array onto the stack
        for (int i = 0; i < n; ++i) {
            stk.push(arr[i]);
        }
        
        // Pop elements from the stack and place them back into the array
        for (int i = 0; i < n; ++i) {
            arr[i] = stk.top();
            stk.pop();
        }
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    Solution obj;
    obj.reverseArray(n, arr);
    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    }
    return 0;
}
// } Driver Code Ends