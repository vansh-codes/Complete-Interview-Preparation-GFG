// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        string ans;
        
        for (int i = 0; i < n; ++i) {
            if (sum >= 9) {
                ans += '9';
                sum -= 9;
            } else {
                ans += to_string(sum);
                sum=0;
            }
        }
        
        while (ans.size() < n) {
            ans += '0';
        }
        if(sum!=0)
        return "-1";
        
        return ans;
    }
};