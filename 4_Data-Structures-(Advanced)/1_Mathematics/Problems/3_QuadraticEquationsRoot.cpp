//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        /*
    -       ---- LEARN --------
        */
        
        vector<int> roots;
        int discriminant = b * b - 4 * a * c;
        
        if (discriminant < 0) {
            // Roots are imaginary
            roots.push_back(-1);
        } else {
            // Compute the roots
            double sqrt_val = sqrt(discriminant);
            double root1 = floor((-b + sqrt_val) / (2.0 * a));
            double root2 = floor((-b - sqrt_val) / (2.0 * a));
            
            if (root1 > root2) {
                roots.push_back(static_cast<int>(root1));
                roots.push_back(static_cast<int>(root2));
            } else {
                roots.push_back(static_cast<int>(root2));
                roots.push_back(static_cast<int>(root1));
            }
        }
        
        return roots;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends