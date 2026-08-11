// Last updated: 8/11/2026, 10:53:51 PM
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0;
        int ans=0;
        int maxfreq=0;
        for(int r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            while((r-l+1)-maxfreq>k)
            {
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};