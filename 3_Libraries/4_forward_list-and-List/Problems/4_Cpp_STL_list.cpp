//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void print(list<int> &A);
void add_to_list(list<int> &A,int x);
void remove_from_back(list<int> &A);
void remove_from_front(list<int> &A);
void sort_list(list<int> &A);
void reverse_list(list<int> &A);
int size_of_list(list<int> &A);
void add_from_front(list<int> &A,int x);


int main() {
	// your code goes here
	int t;
	char d;
	cin>>t;
	while(t--)
	{
		list<int> A;
		int q;
		cin>>q;
		while(q--)
		{
			int c;
			cin>>c;
			if(c==1)
			{
				int x;
				cin>>x;
				add_to_list(A,x);
				print(A);
			}
			else if(c==2)
			{
			     if(A.empty())
                   cout<<"-1"<<endl;
				else
                {sort_list(A);
				    print(A);
                }
			}
			else if(c==3)
			{
			    
			     if(A.empty())
                   cout<<"-1"<<endl;
                   else
				{reverse_list(A);
				print(A);
			}
			}
			else if(c==4)
			{
				cout<<size_of_list(A)<<endl;
			}
			else if(c==5)
			{
				print(A);

			}
			else if(c==6)
			{
			    
			     if(A.empty())
                   cout<<"-1"<<endl;
				else
                {remove_from_back(A);
				print(A);
			}}
			else if(c==7)
            {
                
			     if(A.empty())
                   cout<<"-1"<<endl;
                else
                {remove_from_front(A);
                print(A);
            }}
            else if(c==8)
            {
                int x;
                cin>>x;
                add_from_front(A,x);
                print(A);
            }

		}
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++
/*You are required to complete below methods*/

/*prints space separated 
elements of list A*/
void print(list<int> &A)
{
	//Your code here
	for (auto it = A.begin(); it != A.end(); ++it) {
        cout << *it;
        if(it != A.end()){
            cout<<" ";
        }
    }
    cout << endl;
}
/*remove element from 
back of list A*/
void remove_from_back(list<int> &A)
{
   //Your code here
   if (!A.empty()) {
        A.pop_back();
    }
}
/*remove element from 
front of list A*/
void remove_from_front(list<int> &A)
{
   //Your code here
   if (!A.empty()) {
        A.pop_front();
    }
}

/*inserts an element x at 
the back of the list A */
void add_to_list(list<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}

/*sort the list A in ascending order*/
void sort_list(list<int> &A)
{
	//Your code here
	 A.sort();
}

/*reverses the list A*/
void reverse_list(list<int> &A)
{
	//Your code here
	A.reverse();
}

/*returns the size of the list  A */
int size_of_list(list<int> &A)
{
	//Your code here
	return A.size();
}

/*inserts an element x at 
the front of the list A*/
void add_from_front(list<int> &A,int x)
{
	//Your code here
	A.push_front(x);
}