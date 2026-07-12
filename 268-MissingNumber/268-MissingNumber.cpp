// Last updated: 7/12/2026, 11:34:55 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};