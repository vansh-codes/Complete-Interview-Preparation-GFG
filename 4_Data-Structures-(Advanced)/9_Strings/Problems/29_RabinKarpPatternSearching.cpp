//{ Driver Code Starts
// Initial Template for C++

/* Following program is a C implementation of
Rabin Karp. Algorithm given in the CLRS book */
#include <bits/stdc++.h>

using namespace std;

bool search(string, string, int);

// } Driver Code Ends
// User function Template for C++

// d is the number of characters in the input alphabet
#define d 256

// Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q)
{
    int M = pat.length();
    int N = txt.length();
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;

    // A prime number to calculate hash values (like 101, 103, etc.)
    // Larger prime numbers reduce collision probability
    // q is often chosen as a large prime number
    // For simplicity, we use a simple prime number here
    q = 101;

    // Calculate h = d^(M-1) % q
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;

    // Calculate the hash value of pattern and first window of text
    for (i = 0; i < M; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++)
    {
        // Check the hash values of current window of text and pattern
        if (p == t)
        {
            // Check character by character
            for (j = 0; j < M; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }
            // If p == t and pat[0...M-1] = txt[i...i+M-1]
            if (j == M)
            {
                return true; // Pattern found
            }
        }

        // Calculate hash value for next window of text: Remove leading digit,
        // add trailing digit
        if (i < N - M)
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;

            // Handle negative hash value due to modulo operation in C++
            if (t < 0)
                t = (t + q);
        }
    }

    return false; // Pattern not found
}

//{ Driver Code Starts.

/* Driver program to test above function */
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, p;
        cin >> s >> p;
        int q = 101; // A prime number
        if (search(p, s, q))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

// } Driver Code Ends