class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
         vector<pair<int, int>> activities;
        for (int i = 0; i < n; i++) {
            activities.push_back({end[i], start[i]});
        }
        sort(activities.begin(), activities.end());
        
        int  count = 1; 
      
        int lastEndTime = activities[0].first;
        
        for (int i = 1; i < n; i++) {
           
            if (activities[i].second > lastEndTime) {
                count++;
                lastEndTime = activities[i].first; 
            }
        }
        return count;
    }
};