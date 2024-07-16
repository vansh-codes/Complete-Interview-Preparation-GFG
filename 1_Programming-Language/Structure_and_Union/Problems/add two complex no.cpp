//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Complex {
    int real;
    int img;
};


Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    return result;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int real1, img1, real2, img2;
        cin >> real1 >> img1 >> real2 >> img2;
        Complex c1, c2;
        c1.real = real1;
        c1.img = img1;
        c2.real = real2;
        c2.img = img2;

        Complex c3 = add(c1, c2);

        cout << c3.real << " + " << c3.img << "i" << endl;
    }
    return 0;
}
// } Driver Code Ends
