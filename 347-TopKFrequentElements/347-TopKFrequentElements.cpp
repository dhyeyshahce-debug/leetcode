// Last updated: 7/12/2026, 11:34:53 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;

       for(int n:nums){
          mp[n]++;
       }

        priority_queue<pair<int,int>>pq;
        for(auto p :mp){
            pq.push({p.second,p.first});
        }
        vector<int> ans;

        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};