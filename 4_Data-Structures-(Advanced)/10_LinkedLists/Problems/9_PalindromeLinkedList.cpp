//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

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

class Solution
{
public:
    // Function to check whether the list is palindrome.

    Node *reverseLL(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        Node *newNode = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return newNode;
    }

    bool isPalindrome(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node *newNode = reverseLL(slow);
        Node *first = head;
        Node *second = newNode;

        while (second != NULL)
        {
            if (first->data != second->data)
            {
                reverseLL(newNode);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLL(newNode);
        return true;
    }
};

//{ Driver Code Starts.

/* Function to print nodes in a given linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

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

        if (arr.empty())
        {
            cout << "empty" << endl;
            continue;
        }

        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i)
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        if (ob.isPalindrome(head))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        // Clean up the remaining nodes to avoid memory leaks
        while (head != NULL)
        {
            struct Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}

// } Driver Code Ends