//{ Driver Code Starts
// Initial Template for C++

// C++ program for implementation of KMP pattern searching
// algorithm
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function Template for C++

// Function to fill lps[] for given patttern pat[0..M-1].
void computeLPSArray(string pat, int M, vector<int> &lps)
{
    int len = 0; // length of previous longest prefix suffix
    int i = 1;
    lps[0] = 0; // lps[0] is always 0

    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Function to perform pattern search using KMP algorithm
bool KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();

    if (M == 0)
        return true; // Empty pattern matches any string

    vector<int> lps(M, 0); // LPS array for pattern

    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]

    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            return true; // Pattern found
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }

    return false; // Pattern not found
}

//{ Driver Code Starts.

// Driver program to test above function
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        string s, pat;
        cin >> s >> pat;
        if (KMPSearch(pat, s))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}

// } Driver Code Ends