class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool camp(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> meet(n);
        for(int i=0;i<n;i++)
        {
            meet[i]={start[i],end[i]};
        }
        sort(meet.begin(),meet.end(),camp);
        int cnt=0;
        int freeTime=-1;
        for(int i=0;i<n;i++)
        {
            if(meet[i].first>freeTime)
            {
                freeTime=meet[i].second;
                cnt++;
            }
        }
        return cnt;
        // Your code here
    }
};