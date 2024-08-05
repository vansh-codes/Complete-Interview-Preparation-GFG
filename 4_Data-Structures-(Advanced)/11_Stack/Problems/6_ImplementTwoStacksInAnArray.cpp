//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class twoStacks
{
private:
    int *arr;
    int top1;
    int top2;
    int size;

public:
    twoStacks()
    {
        size = 100; // Assuming a default size of 100 for the array
        arr = new int[size];
        top1 = -1;   // top for stack 1 (first half of array)
        top2 = size; // top for stack 2 (second half of array)
    }

    // Function to push an element into stack1
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            arr[++top1] = x;
        }
        else
        {
            cout << "-1";
            exit(1);
        }
    }

    // Function to push an element into stack2
    void push2(int x)
    {
        if (top2 > top1 + 1)
        {
            arr[--top2] = x;
        }
        else
        {
            cout << "-1";
            exit(1);
        }
    }

    // Function to pop an element from stack1
    int pop1()
    {
        if (top1 >= 0)
        {
            return arr[top1--];
        }
        else
        {
            // cout << "-1";
            // exit(1);
            return -1;
        }
    }

    // Function to pop an element from stack2
    int pop2()
    {
        if (top2 < size)
        {
            return arr[top2++];
        }
        else
        {
            // cout << "-1";
            return -1;
            // exit(1);
        }
    }
};

//{ Driver Code Starts.

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1)
            {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            }
            else if (QueryType == 2)
            {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends