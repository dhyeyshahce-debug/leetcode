// Last updated: 9/19/2026, 6:36:35 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n=temperatures.size();
5        stack<int>st;
6        vector<int>ans(n,0);
7        for(int i=n-1;i>=0;i--)
8        {
9            while(!st.empty()&& temperatures[st.top()]<=temperatures[i])
10            {
11                st.pop();
12            }
13            if(!st.empty())
14            {
15                ans[i]=st.top()-i;
16            }
17            st.push(i);
18        }
19        return ans;
20    }
21};