// Last updated: 8/5/2026, 7:18:03 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        if(s2.size()<s1.size())return false;
        unordered_map<char,int>need,window;

        for(int i=0;i<s1.size();i++)
        {
            need[s1[i]]++;
        }
        int i=0;
        for(int j=0;j<s2.size();j++)
        {
            window[s2[j]]++;

            if(j-i+1>k)
            {
                window[s2[i]]--;

                if(window[s2[i]]==0) window.erase(s2[i]);
                i++;
            }
            if(j-i+1==k)
            {
                if(window==need) return true;
            }
        }
        return false;
    }
};