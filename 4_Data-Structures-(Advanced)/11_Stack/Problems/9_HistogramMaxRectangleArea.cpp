//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int> s;
        long long max_area = 0;
        int tp;                  // To store top of the stack index
        long long area_with_top; // To store area with top bar as the smallest bar

        int i = 0;
        while (i < n)
        {
            // If this bar is higher than the bar at stack top, push it to the stack
            if (s.empty() || arr[s.top()] <= arr[i])
            {
                s.push(i++);
            }
            else
            {
                // Calculate the area with stack top as the smallest bar
                tp = s.top(); // Store the top index
                s.pop();      // Pop the top

                // Calculate the area with arr[tp] as the smallest (or minimum height) bar 'h'
                area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);

                // Update max_area, if needed
                if (max_area < area_with_top)
                    max_area = area_with_top;
            }
        }

        // Now pop the remaining bars from stack and calculate area with each popped bar as the smallest bar
        while (!s.empty())
        {
            tp = s.top();
            s.pop();
            area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }

        return max_area;
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.getMaxArea(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends