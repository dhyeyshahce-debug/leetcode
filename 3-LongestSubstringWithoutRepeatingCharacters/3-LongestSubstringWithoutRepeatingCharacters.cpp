// Last updated: 8/10/2026, 10:51:51 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        int r=0;
        unordered_map<char,int>mp;
        int ans=0;
        for(int r=0;r<n;r++)
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};