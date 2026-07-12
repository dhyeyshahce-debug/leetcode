// Last updated: 7/12/2026, 11:34:36 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                ans = max(ans, count);
            }
            else count=0;
        }
        return ans;
    }
};