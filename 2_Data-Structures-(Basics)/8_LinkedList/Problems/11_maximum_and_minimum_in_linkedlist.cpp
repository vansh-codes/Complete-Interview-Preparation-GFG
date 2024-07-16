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

int maximum(struct Node* head);
int minimum(struct Node* head);

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
        cout << maximum(head) << " " << minimum(head) << endl;
    }
    return 0;
}

int maximum(Node *head)
{
    //Your code here
    int maxi = head->data;
    head = head->next;
    while(head!=NULL){
        maxi = max(maxi, head->data);
        head = head -> next;
    }
    return maxi;
}

int minimum(Node *head)
{
    //Your code here
    int mini = head->data;
    head = head->next;
    while(head!=NULL){
        mini = min(mini, head->data);
        head = head -> next;
    }
    return mini;
}