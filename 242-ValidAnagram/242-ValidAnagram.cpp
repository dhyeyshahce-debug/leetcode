// Last updated: 7/12/2026, 11:34:57 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;

         if(s.length() != t.length())
            return false;

        for(char ch:s){
            mp[ch]++;
        }

        for(char ch:t){
            mp[ch]--;
        }

        for(auto pair:mp){
            if(pair.second!=0) return false;
        }
        return true;
    }
};