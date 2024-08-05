//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// design the class in the most optimal way

class Node
{
public:
    int key, value;
    Node *prev, *next;

    Node(int key, int value)
    {
        this->key = key;
        this->value = value;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class LRUCache
{
private:
    int size, capacity;
    Node *head, *tail;
    unordered_map<int, Node *> mp;

    void addNode(Node *node)
    {
        node->next = head->next;
        head->next->prev = node;
        node->prev = head;
        head->next = node;
    }

    void removeNode(Node *node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void moveToHead(Node *node)
    {
        removeNode(node);
        addNode(node);
    }

    Node *popTail()
    {
        Node *res = tail->prev;
        removeNode(res);
        return res;
    }

public:
    LRUCache(int cap)
    {
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
        size = 0;
        capacity = cap;
    }

    int GET(int key)
    {
        if (mp.find(key) == mp.end())
            return -1;

        Node *node = mp[key];
        moveToHead(node);
        return node->value;
    }

    void SET(int key, int value)
    {
        if (mp.find(key) == mp.end())
        {
            Node *newNode = new Node(key, value);
            mp[key] = newNode;
            addNode(newNode);

            size++;

            if (size > capacity)
            {
                Node *temp = popTail();
                mp.erase(temp->key);
                delete temp;
                size--;
            }
        }
        else
        {
            Node *node = mp[key];
            node->value = value;
            moveToHead(node);
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends