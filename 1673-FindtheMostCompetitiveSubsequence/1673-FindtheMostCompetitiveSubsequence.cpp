// Last updated: 9/23/2026, 7:38:54 PM
1class Solution {
2public:
3    vector<int> mostCompetitive(vector<int>& nums, int k) {
4        int n=nums.size();
5        stack<int>st;
6        vector<int>ans;
7        int remove=n-k;
8        for(int i=0;i<n;i++)
9        {
10            while(!st.empty()&& remove>0 && st.top()>nums[i])
11            {
12                st.pop();
13                remove--;
14            }
15            st.push(nums[i]);
16        }
17        while(remove > 0)
18        {
19            st.pop();
20            remove--;
21        }
22        while(!st.empty())
23        {
24            ans.push_back(st.top());
25            st.pop();
26        }
27        reverse(ans.begin(),ans.end());
28        return ans;
29    }
30};