// Last updated: 7/22/2026, 6:49:02 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr_sum=0;
        int max_sum=nums[0];
        for(int i=0;i<n;i++)
        {
            curr_sum+=nums[i];
            max_sum=max(max_sum,curr_sum);
            if(curr_sum<0) curr_sum=0;
        }
      return max_sum;
    }
};