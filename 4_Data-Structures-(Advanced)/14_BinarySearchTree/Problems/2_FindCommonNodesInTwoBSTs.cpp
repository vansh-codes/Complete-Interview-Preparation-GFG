//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends

class Solution
{
public:
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *root1, Node *root2)
    {
        vector<int> result;
        stack<Node *> stack1, stack2;
        Node *curr1 = root1, *curr2 = root2;

        while (curr1 || !stack1.empty() || curr2 || !stack2.empty())
        {
            // Reach the leftmost Node of both BSTs and push ancestors of the leftmost nodes to stacks
            while (curr1)
            {
                stack1.push(curr1);
                curr1 = curr1->left;
            }
            while (curr2)
            {
                stack2.push(curr2);
                curr2 = curr2->left;
            }

            // Now compare the top elements of both stacks
            if (!stack1.empty() && !stack2.empty())
            {
                curr1 = stack1.top();
                curr2 = stack2.top();

                if (curr1->data == curr2->data)
                {
                    result.push_back(curr1->data);
                    stack1.pop();
                    stack2.pop();
                    // Move to the right subtree for both trees
                    curr1 = curr1->right;
                    curr2 = curr2->right;
                }
                else if (curr1->data < curr2->data)
                {
                    stack1.pop();
                    curr1 = curr1->right;
                    curr2 = nullptr; // Don't move curr2 so we continue comparing with the current top of stack2
                }
                else
                {
                    stack2.pop();
                    curr2 = curr2->right;
                    curr1 = nullptr; // Don't move curr1 so we continue comparing with the current top of stack1
                }
            }
            else
            {
                // If either stack is empty, we can break out of the loop
                break;
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root1 = buildTree(s);

        getline(cin, s);
        Node *root2 = buildTree(s);
        Solution ob;
        vector<int> res = ob.findCommon(root1, root2);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }

    return 1;
}
// } Driver Code Ends