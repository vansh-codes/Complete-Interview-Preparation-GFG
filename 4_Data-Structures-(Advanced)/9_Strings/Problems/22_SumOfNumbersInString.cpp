//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
            {
                int temp = i;
                while (isdigit(str[temp]) == true)
                {
                    temp++;
                }
                string s1 = str.substr(i, temp - i);
                int a = stoi(s1);
                count = count + a;
                i = temp - 1;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    // input alphanumeric string
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.findSum(str);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends