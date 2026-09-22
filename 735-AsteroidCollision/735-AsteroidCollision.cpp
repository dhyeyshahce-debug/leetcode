// Last updated: 9/22/2026, 7:41:13 PM
1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        int n = asteroids.size();
5        vector<int> ans;
6        stack<int> st;
7
8        for(int i = 0; i < n; i++)
9        {
10            bool destroyed = false;
11
12            while(!st.empty() && st.top() > 0 && asteroids[i] < 0 &&
13                  st.top() < -asteroids[i])
14            {
15                st.pop();
16            }
17
18            if(!st.empty() && asteroids[i] < 0)
19            {
20                if(st.top() == -asteroids[i])
21                {
22                    st.pop();
23                    destroyed = true;
24                }
25                else if(st.top() > -asteroids[i])
26                {
27                    destroyed = true;
28                }
29            }
30
31            if(!destroyed)
32            {
33                st.push(asteroids[i]);
34            }
35        }
36
37        while(!st.empty())
38        {
39            ans.push_back(st.top());
40            st.pop();
41        }
42
43        reverse(ans.begin(), ans.end());
44
45        return ans;
46    }
47};