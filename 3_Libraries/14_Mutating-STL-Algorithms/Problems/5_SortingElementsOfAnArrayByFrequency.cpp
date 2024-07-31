//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
    public:
    //Complete this function
    
    // Custom comparator function for sorting by frequency and element value
static bool sortByFreqAndValue(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second; // Sort by decreasing frequency
        } else {
            return a.first < b.first; // Sort by increasing element value if frequencies are equal
        }
    }

    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        // Step 1: Count frequencies of each element
     unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[arr[i]]++;
        }
        
        // Step 2: Convert frequency map to a vector of pairs
        vector<pair<int, int>> freqList(freq.begin(), freq.end());
        
        // Step 3: Sort the frequency list using custom comparator
        sort(freqList.begin(), freqList.end(), Solution::sortByFreqAndValue);
        
        // Step 4: Construct the sorted array based on sorted frequency list
        vector<int> sortedArray;
        for (auto& pair : freqList) {
            int element = pair.first;
            int frequency = pair.second;
            for (int i = 0; i < frequency; ++i) {
                sortedArray.push_back(element);
            }
        }
        
        return sortedArray;


        
    }
};


//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends