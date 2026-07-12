// Last updated: 7/12/2026, 11:34:51 PM
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        for(int x:s){
                ans.push_back(x);
        }
        sort(ans.begin(), ans.end(), greater<int>());
        if(ans.size()>=3){
            return ans[2];
        }
        else{
            return ans[0];
        }
    }
};