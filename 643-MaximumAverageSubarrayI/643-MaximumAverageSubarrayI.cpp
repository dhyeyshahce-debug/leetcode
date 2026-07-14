// Last updated: 7/14/2026, 7:27:41 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        long long sum = 0;
        long long maxSum = LLONG_MIN;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            if(right-left+1>k)
            {
                sum-=nums[left];
                left++;
            }
            if(right-left+1==k)
            {
                maxSum = max(maxSum, sum);
            }
        }
        return (double)maxSum/k;
    }
};