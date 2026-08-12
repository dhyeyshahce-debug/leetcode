// Last updated: 8/12/2026, 10:45:49 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int,int>mp;
6        for(int i=0;i<n;i++)
7        {
8            mp[nums[i]]++;
9            if(mp[nums[i]]>1)return true;
10        }
11        return false;
12    }
13};