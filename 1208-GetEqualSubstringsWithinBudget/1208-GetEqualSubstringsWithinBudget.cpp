// Last updated: 8/11/2026, 10:51:15 PM
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        unordered_map<char,int>mp;
5        int l=0;
6        int ans=0;
7        int maxfreq=0;
8        for(int r=0;r<s.size();r++)
9        {
10            mp[s[r]]++;
11            maxfreq=max(maxfreq,mp[s[r]]);
12            while((r-l+1)-maxfreq>k)
13            {
14                mp[s[l]]--;
15                l++;
16            }
17            ans=max(ans,r-l+1);
18        }
19        return ans;
20    }
21};