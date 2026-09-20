// Last updated: 9/20/2026, 7:03:56 PM
1class Solution {
2public:
3    string removeStars(string s) {
4        stack<char>st;
5        for(int i=0;i<s.size();i++)
6        {
7           if(s[i]=='*')
8           {
9            st.pop();
10           }
11           else{
12           st.push(s[i]);
13           }  
14        }
15        string ans="";
16        while(!st.empty())
17        {
18            ans+=st.top();
19            st.pop();
20        }
21        reverse(ans.begin(),ans.end());
22        return ans;
23    }
24};