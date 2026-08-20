// Last updated: 8/20/2026, 11:04:15 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n=nums.size();
5        set<vector<int>>st;
6        sort(nums.begin(),nums.end());
7        for(int i=0;i<n-2;i++)
8        {
9            int l=i+1;
10            int r=n-1;
11            while(l<r){
12                int sum = nums[i] + nums[l] + nums[r];
13                if(sum==0)
14                {
15                    st.insert({nums[i],nums[l],nums[r]});
16                    l++;
17                    r--;
18                }
19                else if(sum>0)r--;
20                else l++;
21            } 
22        }
23        vector<vector<int>> ans(st.begin(),st.end());
24        return ans;
25    }
26};