class Solution {
public:
    int rob(vector<int>& nums) {
        int money=0;
        int n = nums.size();
        vector<int> dp(n+1 , -1);
        if(n==1)
        {
            return nums[0];
        }
        dp[0]=nums[0];
        dp[1]=max(dp[0] , nums[1]);
        if(n==2)
        {
            return max(dp[0] , dp[1]);
        }
        
        for(int i =2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i] , dp[i-1]);
        }
        return dp[n-1];
    }
};