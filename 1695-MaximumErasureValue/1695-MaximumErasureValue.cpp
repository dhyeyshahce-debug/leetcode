// Last updated: 8/11/2026, 10:25:23 PM
1class Solution {
2public:
3    int maximumUniqueSubarray(vector<int>& nums) {
4        int n=nums.size();
5        int l=0;
6        int ans=0;
7        int sum=0;
8        unordered_map<int,int>mp;
9        for(int r=0;r<n;r++)
10        {
11            sum+=nums[r];
12            mp[nums[r]]++;
13            while(mp[nums[r]]>1)
14            {
15                sum-=nums[l];
16                mp[nums[l]]--;
17                l++;
18            }
19            ans=max(ans,sum);
20        }
21        return ans;
22    }
23};