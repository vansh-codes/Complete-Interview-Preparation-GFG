//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct area {
    int sd;
    int len, wid;
};


// } Driver Code Ends
// User function Template for C++

struct square {
    int side;
};

struct rectangle {
    int length;
    int width;
};

void find_area(int side, int le, int wd) {
    square sq;
    sq.side = side;

    rectangle rect;
    rect.length = le;
    rect.width = wd;

    int square_area = sq.side * sq.side;
    int rectangle_area = rect.length * rect.width;

    cout << square_area << " " << rectangle_area;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int side, length, wide;
        cin >> side >> length >> wide;

        find_area(side, length, wide);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
