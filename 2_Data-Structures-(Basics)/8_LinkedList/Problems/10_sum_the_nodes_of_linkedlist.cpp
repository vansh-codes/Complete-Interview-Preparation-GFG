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

int sumOfElements(struct Node* head);

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
        cout << sumOfElements(head) << endl;
    }
    return 0;
}

int sumOfElements(Node *head)
{
   //Your code here
   int sum = 0;
   while(head!=NULL){
       sum += head->data;
       head = head->next;
   }
   return sum;
}
