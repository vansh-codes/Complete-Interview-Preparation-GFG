
class Solution
{
    public:
    //Function to find all possible unique subsets.
    vector<vector<int>>store;
    unordered_set<string>mp;
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        string s="";
        vector<int>temp;
        rec(0,n,temp,arr,s);
        sort(store.begin(),store.end());
        return store;
    }
    
    void rec(int index,int n,vector<int>temp,vector<int>arr,string s){
        if(index==n)
        {
            if(mp.find(s)==mp.end())
            {
                mp.insert(s);
                store.push_back(temp);
            }
            return;
        }
        rec(index+1,n,temp,arr,s);
        temp.push_back(arr[index]);
        s+=to_string(arr[index]);
        rec(index+1,n,temp,arr,s);
    }
};
