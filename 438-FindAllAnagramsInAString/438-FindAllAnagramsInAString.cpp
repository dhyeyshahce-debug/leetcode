// Last updated: 8/5/2026, 7:18:14 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int>ans;
       int k=p.size();

       if(s.size()<p.size())return ans;
       unordered_map<char,int>need,window;
       for(int i=0;i<p.size();i++)
       {
         need[p[i]]++;
       } 
       int i=0;
       for(int j=0;j<s.size();j++)
       {
          window[s[j]]++;

          if(j-i+1>k)
          {
            window[s[i]]--;

            if(window[s[i]]==0) window.erase(s[i]);
            i++;
          }
          if(j-i+1==k)
          {
            if(window==need)
            {
                ans.push_back(i);
            }
          }
       }
       return ans;
    }
};