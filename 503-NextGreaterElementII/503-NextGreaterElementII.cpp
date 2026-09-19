// Last updated: 9/19/2026, 6:15:51 PM
1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        int n=nums.size();
5        stack<int>st;
6        vector<int>ans(n,-1);
7        for(int i=2*n-1;i>=0;i--)
8        {
9            while(!st.empty() && st.top()<=nums[i%n])
10            {
11                st.pop();
12            }
13            if(!st.empty())
14            {
15                ans[i%n]=st.top();
16               
17            } 
18            st.push(nums[i%n]);
19        }
20        return ans;
21    }
22};