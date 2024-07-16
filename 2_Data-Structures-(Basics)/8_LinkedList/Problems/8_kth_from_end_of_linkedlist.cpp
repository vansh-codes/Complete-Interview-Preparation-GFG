#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to get the kth node from the last of a linked list*/
int getKthFromLast(struct Node *head, int k);


// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
    //Brute Force
    /*      
        Node* temp = head;
        int count = 1;
        int n=0;
        while(head != NULL){
            n++;
            head = head->next;
        }
        if(k>n) return -1;
        while(temp!=NULL && count!=(n-k+1)){
            temp = temp->next;
            count++;
        }
        return temp->data; 
    */
        
    //Optimized
        int count = 1;
        Node* slow = head;
        Node* fast = head;
        while(count <= k){
            if(fast==NULL){
                return -1;
            }
            else{
                fast = fast -> next;
                count++;
            }
        }
        
        while(fast!=NULL){
            slow = slow->next;
            fast = fast -> next;
        }
        return slow->data;
        
    }
};


//{ Driver Code Starts.

int main() {
    int T, i, n, l, k;

    cin >> T;

    while (T--) {
        struct Node *head = NULL, *tail = NULL;

        cin >> n >> k;
        int firstdata;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for (i = 1; i < n; i++) {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.getKthFromLast(head, k) << endl;
    }
    return 0;
}