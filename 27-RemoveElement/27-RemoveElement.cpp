// Last updated: 7/12/2026, 11:35:23 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int remove=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)remove++;
            else{
                nums[i-remove]=nums[i];
            }
        }
        return nums.size()-remove;
    }
};