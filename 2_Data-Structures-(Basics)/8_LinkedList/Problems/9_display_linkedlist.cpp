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

vector<int> displayList(Node *head);

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
        vector<int> list = displayList(head);
        for(int x : list){
            cout<<x<<" ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> displayList(Node *head)
{
    //Your code here
    vector<int> ans;
    while(head!=NULL){
        ans.push_back(head->data);
        head = head->next;
    }
    return ans;
}
