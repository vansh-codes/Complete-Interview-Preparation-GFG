//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M)
    {
        // Your code here
        vector<int> intersection;
        int i = 0, j = 0;
        while (i < N && j < M)
        {
            if (arr1[i] < arr2[j])
            {
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                j++;
            }
            else
            {
                if (intersection.empty() || intersection.back() != arr1[i])
                {
                    intersection.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        if (intersection.empty())
        {
            intersection.push_back(-1);
        }
        return intersection;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--)
    {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1)
        {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2)
        {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.printIntersection(arr1, arr2);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends