// Last updated: 8/3/2026, 10:51:10 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char m:magazine)
        {
            mp[m]++;
        }
        for(char rs:ransomNote)
        {
            mp[rs]--;
            if(mp[rs]<0) return false;
        }
        return true;
    }
};