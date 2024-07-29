//{ Driver Code Starts
//Initial Template for C++

// unordered_set::size
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
int SizeMe(unordered_set<string> myset){
    return myset.size();
}


//{ Driver Code Starts.

int main ()
{

  int t;
  cin>>t;
  
  while(t--){

  string str;
  cin>>str;

  unordered_set<string> myset;

  myset.insert(str);

  cout<<SizeMe(myset)<<endl;

  }
  
  return 0;
}

// } Driver Code Ends