// Last updated: 7/12/2026, 11:35:14 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int num:nums){
            ans=ans^num;
        }
        return ans;
    }
};