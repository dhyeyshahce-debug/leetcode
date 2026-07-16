// Last updated: 7/16/2026, 7:44:43 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        result[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            result[i]=nums[i]+result[i-1];
        }
        return result;
    }
};