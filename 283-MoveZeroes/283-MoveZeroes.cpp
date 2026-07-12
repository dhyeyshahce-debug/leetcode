// Last updated: 7/12/2026, 11:35:09 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        for(int right=0;right<n;right++){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
        } 
    }
};