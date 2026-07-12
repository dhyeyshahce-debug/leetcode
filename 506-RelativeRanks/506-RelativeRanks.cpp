// Last updated: 7/12/2026, 11:34:34 PM
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      int n=score.size();
      vector<pair<int,int>>nums;
      for(int i=0;i<n;i++){
        nums.push_back({score[i],i});
      }
      sort(nums.begin(), nums.end(), greater<pair<int,int>>());
      vector<string> ans(n);
      for(int i=0;i<n;i++){
        if(i == 0)
                ans[nums[i].second] = "Gold Medal";
            else if(i == 1)
                ans[nums[i].second] = "Silver Medal";
            else if(i == 2)
                ans[nums[i].second] = "Bronze Medal";
            else
                ans[nums[i].second] = to_string(i + 1);
     }
        return ans;
    }
};