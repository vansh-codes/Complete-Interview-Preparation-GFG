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

bool inc(Node* head){
    while(head->next!=NULL){
        if(head->data > head->next->data) return false;
        head = head -> next;
    }
    return true;
}

bool dec(Node* head){
    while(head->next!=NULL){
        if(head->data < head->next->data) return false;
        head = head -> next;
    }
    return true;
}

bool isSorted(Node * head)
{
    //Your code here
    return (inc(head) || dec(head));
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
        cout<<isSorted(head) << endl;
    }
    return 0;
}