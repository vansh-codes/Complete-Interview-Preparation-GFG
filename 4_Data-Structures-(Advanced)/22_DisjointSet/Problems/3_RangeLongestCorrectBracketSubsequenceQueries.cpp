//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int pairs;
    int open;   // unused
    int closed; // unused

    Node() { pairs = open = closed = 0; }
};

int getMid(int s, int e)
{
    return s + (e - s) / 2;
}

Node merge(Node leftChild, Node rightChild)
{
    Node parentNode;
    int minMatched = min(leftChild.open, rightChild.closed);
    parentNode.pairs = leftChild.pairs + rightChild.pairs + minMatched;
    parentNode.open = leftChild.open + rightChild.open - minMatched;
    parentNode.closed = leftChild.closed + rightChild.closed - minMatched;
    return parentNode;
}

void constructSTUtil(string str, int ss, int se, Node *st, int si)
{
    if (ss == se)
    {
        st[si].pairs = 0;
        if (str[ss] == '(')
            st[si].open = 1;
        else
            st[si].closed = 1;

        return;
    }

    int mid = getMid(ss, se);
    constructSTUtil(str, ss, mid, st, si * 2 + 1);
    constructSTUtil(str, mid + 1, se, st, si * 2 + 2);

    st[si] = merge(st[si * 2 + 1], st[si * 2 + 2]);
}

Node *constructST(string str, int n)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2 * (int)pow(2, x) - 1;
    Node *st = new Node[max_size];

    constructSTUtil(str, 0, n - 1, st, 0);
    return st;
}

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // str : given string
    // n : length of the string
    // qs and qe are L and R respectively
    // st : segment tree of the given string of Node type
    // return the maximum length of correct bracket subsequence of the sequence.

    // Function to returns the maximum length of correct bracket subsequence
    // between starting and ending indexes.
    Node getLongestSequenceUtil(Node *st, int ss, int se, int qs, int qe, int si)
    {
        if (qs > se || qe < ss)
            return Node();
        if (qs <= ss && qe >= se)
            return st[si];
        int mid = getMid(ss, se);
        Node leftChild = getLongestSequenceUtil(st, ss, mid, qs, qe, si * 2 + 1);
        Node rightChild = getLongestSequenceUtil(st, mid + 1, se, qs, qe, si * 2 + 2);
        return merge(leftChild, rightChild);
    }

    int getLongestSequence(Node *st, string str, int qs, int qe, int n)
    {
        if (qs < 0 || qe > n - 1 || qs > qe)
        {
            cout << "Invalid query" << endl;
            return -1;
        }
        return getLongestSequenceUtil(st, 0, n - 1, qs, qe, 0).pairs * 2;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int query;
        string str;

        cin >> str >> query;
        int n = str.length();

        Node *st = constructST(str, n);

        int startIndex, endIndex;
        while (query--)
        {
            cin >> startIndex >> endIndex;
            Solution obj;
            cout << obj.getLongestSequence(st, str, startIndex, endIndex, n)
                 << endl;
        }
    }

    return 0;
}

// } Driver Code Ends