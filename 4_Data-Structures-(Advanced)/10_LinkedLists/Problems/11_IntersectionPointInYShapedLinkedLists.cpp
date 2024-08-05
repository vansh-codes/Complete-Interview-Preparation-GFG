//{ Driver Code Starts
#include <iostream>

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
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

vector<int> take()
{
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
        arr.push_back(number);
    }
    return arr;
}

Node *inputList(int size, vector<int> v)
{
    if (size == 0)
        return NULL;

    int val = v[0];

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        val = v[i + 1];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

// } Driver Code Ends

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    Node *curr = head1;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = head1;
    Node *slow = head2, *fast = head2;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }
    if (!fast || !fast->next)
        return -1;

    slow = head2;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}

//{ Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    srand(time(0));
    int T, n1, n2, n3;

    cin >> T;
    cin.ignore();
    while (T--)
    {

        vector<int> v1 = take();
        vector<int> v2 = take();
        vector<int> v3 = take();
        int n1 = v1.size(), n2 = v2.size(), n3 = v3.size();

        Node *head1 = NULL;
        Node *head2 = NULL;
        Node *common = NULL;

        head1 = inputList(n1, v1);
        head2 = inputList(n2, v2);
        common = inputList(n3, v3);

        Node *temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends