//{ Driver Code Starts
//Initial Template for C++

// Erasing from forward_list
#include <iostream>
#include <forward_list>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
forward_list<int> EraseMe (forward_list<int> fwdlist){

    // Your code here
   // Use erase_after function
             
         auto it = fwdlist.before_begin(); // iterator before the first element
    
        // Move iterator to the position just before the element to erase
        advance(it, 1); // default iterator position is at the beginning, so move 1 step forward
        
        // Check if there is an element after the default iterator position
        if (next(it) != fwdlist.end()) {
            fwdlist.erase_after(it); // erase the element after the default iterator position
        }
        
        return fwdlist; // return the updated forward_list

}


//{ Driver Code Starts.

int main ()
{

int t;
cin>>t;
  
while(t--){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
      int x;
        cin>>x;
        arr[i]=x;
  }

    forward_list<int> fwdlist;

    auto it = fwdlist.before_begin();

    for(int i=0; i<n; ++i){
        it = fwdlist.insert_after(it, arr[i]);
    }

  forward_list<int> res = EraseMe(fwdlist);

  for (int &x: res) cout << x << ' ';
  cout <<endl;

}

  return 0;
}

// } Driver Code Ends