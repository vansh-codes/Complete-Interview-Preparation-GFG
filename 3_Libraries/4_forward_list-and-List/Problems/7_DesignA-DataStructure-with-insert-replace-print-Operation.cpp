//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
list<int> l; // Global list to store the data structure

// inserts an integer at the end of the data structure.
void insert(int x) {
    l.push_back(x);
}

// prints the element of the data structure
// the new line is given by the driver's code
void print() {
    for (auto it = l.begin(); it != l.end(); ++it) {
        cout << *it;
        if (next(it) != l.end()) {
            cout << " ";
        }
    }
}

// replaces the first occurrence of x with
// sequence.
void replace(int x, vector<int> sequence) {
    auto it = find(l.begin(), l.end(), x);
    if (it != l.end()) {
        it = l.erase(it); // Remove the first occurrence of x
        l.insert(it, sequence.begin(), sequence.end()); // Insert sequence at the position of x
    }
}
    
//{ Driver Code Starts.

int main(){
    
    int t; cin>>t;
    while(t-- > 0){
        int q;
        cin>>q;
        while(q-- > 0){
            int choice, x;
            cin>>choice;
            if(choice == 1){
                cin>>x;
                insert(x);
            }
            else if( choice  == 2){
                print();
                cout<<"\n";
            }
            else{
                int n;
                cin>>x>>n;
                vector<int> sequence;
                for(int i = 0;i<n;i++){
                    int temp;
                    cin>>temp;
                    sequence.push_back(temp);
                }
                replace(x, sequence);
            }
        }
        
    }
    
    return 0;
}
// } Driver Code Ends