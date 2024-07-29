//{ Driver Code Starts
//Initial Template for C++

// unordered_set::swap
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
void SwapMe(unordered_set<string> &first, unordered_set<string> &second){
    swap(first, second);

    // For printing the set
    for (const string &x: first) cout << x << " ";
    cout << endl;
    for (const string &x: second) cout << x << " ";
    cout << endl;
}


//{ Driver Code Starts.

int main ()
{

  int t;
  cin>>t;
  
  while(t--){
  
  string str1;
  cin>>str1;

  string str2;
  cin>>str2;

  unordered_set<string> first;
  first.insert(str1);
  unordered_set<string> second;
  second.insert(str2);

  SwapMe(first, second);

}

  return 0;
}

// } Driver Code Ends