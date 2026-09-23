// Last updated: 9/23/2026, 7:12:21 PM
1class Solution {
2public:
3    string removeKdigits(string num, int k) {
4        int n=num.size();
5        stack<char>st;
6        vector<char>ans;
7        for(int i=0;i<n;i++)
8        {
9            while(!st.empty() && k>0 && st.top()>num[i])
10            {
11                st.pop();
12                k--;
13            }
14            st.push(num[i]);
15        }
16        while(!st.empty() && k > 0)
17        {
18            st.pop();
19            k--;
20        }
21        while(!st.empty())
22        {
23            ans.push_back(st.top());
24            st.pop();
25        }
26        reverse(ans.begin(),ans.end());
27        int i=0;
28        while(i<ans.size()&&ans[i]=='0')
29        {
30            i++;
31        }
32        if(i==ans.size())return "0";
33        string result(ans.begin()+i,ans.end());
34        return result;
35    }
36};