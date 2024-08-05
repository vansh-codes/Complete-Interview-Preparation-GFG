//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node *head)
{
    if (!head)
        return false;

    Node *fast = head->next;
    Node *slow = head;

    while (fast != slow)
    {
        if (!fast || !fast->next)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }

    return true;
}

int length(Node *head)
{
    int ret = 0;
    while (head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

bool notOriginal(Node *head, unordered_map<Node *, int> &myMap)
{

    while (head)
    {
        if (myMap.find(head) == myMap.end())
            return true;
        if (myMap[head] != (head->data))
            return true;

        head = head->next;
    }
}

// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
public:
    // Function to remove a loop in the linked list.
    Node *detectslow(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return slow;
        }
        return NULL;
    }

    Node *startNode(Node *head, Node *meet)
    {
        Node *cur = head;
        Node *temp = meet;
        while (cur != temp)
        {
            cur = cur->next;
            temp = temp->next;
        }
        return cur;
    }

    void removeLoop(Node *head)
    {
        if (head == NULL)
            return;

        Node *meet = detectslow(head);
        if (meet == NULL)
            return;

        Node *startingNode = startNode(head, meet);
        Node *temp = startingNode;

        while (temp->next != startingNode)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
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

        unordered_map<Node *, int> myMap;

        int n, num;
        n = arr.size();

        Node *head, *tail;
        num = arr[0];
        head = tail = new Node(num);

        myMap[head] = num;

        for (int i = 1; i < n; i++)
        {
            num = arr[i];
            tail->next = new Node(num);
            tail = tail->next;
            myMap[tail] = num;
        }

        int pos;
        cin >> pos;
        cin.ignore();
        loopHere(head, tail, pos);

        Solution ob;
        ob.removeLoop(head);

        if (isLoop(head) || length(head) != n || notOriginal(head, myMap))
            cout << "false\n";
        else
            cout << "true\n";
    }
    return 0;
}

// } Driver Code Ends