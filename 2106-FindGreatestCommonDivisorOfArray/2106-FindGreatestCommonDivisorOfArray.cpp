// Last updated: 7/18/2026, 11:46:26 PM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min_ele=*min_element(nums.begin(),nums.end());
        int max_ele=*max_element(nums.begin(),nums.end());

        return gcd(min_ele,max_ele);
    }
};