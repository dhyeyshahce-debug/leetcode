// Last updated: 9/20/2026, 6:40:26 PM
1class Solution {
2public:
3    vector<int> finalPrices(vector<int>& prices) {
4        int n=prices.size();
5        vector<int>ans(n,0);
6        stack<int>st;
7        for(int i=n-1;i>=0;i--)
8        {
9            while(!st.empty() && st.top()>prices[i])
10            {
11                st.pop();
12            }
13            if(!st.empty())
14            {
15                ans[i]=prices[i]-st.top();
16            } 
17            else 
18            {
19                ans[i]=prices[i];
20            }
21            st.push(prices[i]);
22        }
23        return ans;
24    }
25};