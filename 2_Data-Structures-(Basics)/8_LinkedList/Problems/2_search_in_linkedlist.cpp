#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

bool searchLinkedList(struct Node* head, int x);

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
        int x; cin >> x;
        cout << searchLinkedList(head, x) << endl;
    }
    return 0;
}

bool searchLinkedList(Node *head, int x)
{
    //Your code here
    while(head!=NULL){
        if(head->data == x){
            return true;
        }
        head = head -> next;
    }
    return false;
}