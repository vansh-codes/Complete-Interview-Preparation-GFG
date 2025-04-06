/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    private :
    static bool  cmp(Job a, Job b){
        return (a.profit > b.profit);
    }
    
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr + n, cmp);
        bool temp[n]={false};
        int noOfJOb=0,maxProfit=0;
        vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead)-1;j>=0;j--){
                if(temp[j] == false){
                    noOfJOb++;
                    temp[j]=true;
                 //  cout<<arr[j].id<<" "<<arr[j].profit<<endl;
                    maxProfit += arr[i].profit;
                    break;
                }
            }
        }
       
        return {noOfJOb, maxProfit};
    } 
};