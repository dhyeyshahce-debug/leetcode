// Last updated: 7/12/2026, 11:34:23 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int x:nums)
        {
            ans.push_back(x);
        }
         for(int x:nums)
        {
            ans.push_back(x);
        }
        return ans;
    }
};