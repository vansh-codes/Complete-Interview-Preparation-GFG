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

Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    Node* temp = head;
    if(pos==1){
        temp = head->next;
        return temp;
    }
    int count = 1;
    while(count!=pos-1){
        temp = temp->next;
        count++;
    } 
    temp->next = temp->next->next;
    Node* newNode = head;
    return newNode;
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
        int pos;
	    cin>>pos;
	    head=deleteAtPosition(head,pos);
    	displayList(head);
	    cout<<endl;
    }
    return 0;
}