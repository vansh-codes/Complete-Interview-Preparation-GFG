//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    // Helper function to swap elements
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    // Partition function similar to the one used in QuickSort
    int partition(int arr[], int l, int r) {
        int pivot = arr[r]; // pivot
        int i = l; // Index of smaller element
    
        for (int j = l; j <= r - 1; j++) {
            // If current element is smaller than or equal to pivot
            if (arr[j] <= pivot) {
                swap(&arr[i], &arr[j]);
                i++; // increment index of smaller element
            }
        }
        swap(&arr[i], &arr[r]);
        return i;
    }

    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        /*
    -       ---- LEARN --------
        */
        // If k is smaller than number of elements in array
        if (k > 0 && k <= r - l + 1) {
            // Partition the array around last element and get position of pivot element in sorted array
            int pos = partition(arr, l, r);
    
            // If position is same as k
            if (pos - l == k - 1)
                return arr[pos];
    
            // If position is more, recur for left subarray
            if (pos - l > k - 1)
                return kthSmallest(arr, l, pos - 1, k);
    
            // Else recur for right subarray
            return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
        }
    
        // If k is more than number of elements in array
        return INT_MAX;
        
    }
};


//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends