//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
        : data(x), next(NULL) {}
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void addressstore(vector<Node *> &arr, Node *head)
{
    Node *temp = head;
    int i = 0;
    while (temp)
    {
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(const vector<Node *> &before, const vector<Node *> &after, int num, int k)
{
    if (k > num)
        return true;

    for (int i = 0; i < num; i++)
    {
        if ((i == k - 1) || (i == num - k))
        {
            if (!((before[k - 1] == after[num - k]) &&
                  (before[num - k] == after[k - 1])))
            {
                return false;
            }
        }
        else
        {
            if (before[i] != after[i])
            {
                return false;
            }
        }
    }
    return true;
}

// } Driver Code Ends

// User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

// Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node *head, int num, int K)
{
    // Your Code here
    int count = 0;
    Node *ptr = head, *temp = head;
    if (head->next == NULL)
        return head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    // If K is more than no of nodes then return
    if (count < K)
        return head;
    ptr = head;

    // It's a special case where node is equal to 2
    if (count == 2)
    {
        head = ptr->next;
        head->next = ptr;
        ptr->next = NULL;
        return head;
    }

    int val = K, ind = K;
    // when you have odd no of nodes and kth nodes is the middle node then you simply return
    if (count % 2 == 1 && count / 2 + 1 == K)
        return head;

    // if K equal to last node
    if (count == K)
    {
        val = 1;
        ind = 1;
    }

    // pointing (k-1)th nodes from begginning
    for (int i = 1; i < val - 1; i++)
        temp = temp->next;

    // pointing (k+1)th nodes from end
    for (int i = 1; i < count - ind; i++)
        ptr = ptr->next;

    Node *q = NULL;
    // swapping the nodes
    if (K == 1 || count == K)
    {
        head = ptr->next;
        head->next = temp->next;
        ptr->next = temp;
        temp->next = NULL;
    }
    else
    {
        q = temp->next;
        temp->next = ptr->next;
        ptr->next = q;
        q = ptr->next->next;
        ptr->next->next = temp->next->next;
        temp->next->next = q;
    }

    return head;
}

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

        // Read numbers from the input line
        while (ss >> number)
        {
            arr.push_back(number);
        }

        int k;
        cin >> k;
        cin.ignore();

        Node *head = nullptr;

        // Check if the array is empty
        if (!arr.empty())
        {
            head = new Node(arr[0]);
            Node *tail = head;
            for (size_t i = 1; i < arr.size(); ++i)
            {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        int num = arr.size();
        vector<Node *> before(num);
        addressstore(before, head);

        Solution ob;
        head = ob.swapKthNode(head, k);

        vector<Node *> after(num);
        addressstore(after, head);

        if (check(before, after, num, k))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}
// } Driver Code Ends