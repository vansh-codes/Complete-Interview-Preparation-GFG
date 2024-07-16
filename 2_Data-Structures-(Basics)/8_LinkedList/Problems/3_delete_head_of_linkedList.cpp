#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


//Complete this function
Node * deleteHead(Node *head)
{
    //Your code here
    Node* temp = head->next;
    return temp;
}


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = deleteHead (head);
        displayList (head);
        cout << endl;
    }
    return 0;
}