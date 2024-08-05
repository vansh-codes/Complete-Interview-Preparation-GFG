//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to swap elements pairwise.
struct Node *pairwise_swap(struct Node *head)
{
    // your code here
    if (head && head->next)
    {
        struct Node *next = pairwise_swap(head->next->next);
        struct Node *temp = head->next;
        head->next = next;
        temp->next = head;
        head = temp;
    }
    return head;
}

//{ Driver Code Starts.
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", (node)->data);
        node = (node)->next;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, l, firstdata;
        cin >> n;
        // taking first node of linked list
        cin >> firstdata;
        struct Node *head = new Node(firstdata);
        struct Node *tail = head;
        // taking remaining nodes of linked list
        for (int i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        head = pairwise_swap(head);
        printList(head);
        cout << endl;
    }
}
// } Driver Code Ends