//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

template <class T>
void sortArray(T a[], int n)
{ 
	//Add your code here.
	sort(a, a+n);
}

template <class T>
void printArray(T a[], int n)
{
	//Add your code here.
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	cout<<endl;
}

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n, q, i;
	cin>>n>>q;
	
	int intArr[n];
	string strArr[n];
    float floatArr[n];
    
	switch(q)
	{
	    case 1:
	    for(i=0; i<n; i++)
	    {
	        cin>>intArr[i];
	    }
	    sortArray(intArr, n);
    	printArray(intArr, n);
    	break;
        
        case 2:
	    for(i=0; i<n; i++)
	    {
	        cin>>strArr[i];
	    }
	    sortArray(strArr, n);
    	printArray(strArr, n);
    	break;
    	
        case 3:
	    for(i=0; i<n; i++)
	    {
	        cin>>floatArr[i];
	    }
	    sortArray(floatArr, n);
    	printArray(floatArr, n);
    	break;
	}
    }

	return 0;
}

// } Driver Code Ends