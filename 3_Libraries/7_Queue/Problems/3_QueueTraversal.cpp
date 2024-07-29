//{ Driver Code Starts
//Initial Template for C++

// Printing the queue
#include <iostream>
#include <queue>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
void TraveseMe(queue<int> myqueue){
    
    // Your code here
   // Use front function 
    
    while (!myqueue.empty()) {
        cout << myqueue.front();
        myqueue.pop();
    }

}


//{ Driver Code Starts.

int main ()
{
  int t;
  cin>>t;

  while(t--){

  int n;
  cin>>n;

  queue<int> myqueue;

  for (int i=1;i<=n;i++){
      myqueue.push(i);
  }

    TraveseMe(myqueue);
    cout<<endl;

}

  return 0;
}

// } Driver Code Ends