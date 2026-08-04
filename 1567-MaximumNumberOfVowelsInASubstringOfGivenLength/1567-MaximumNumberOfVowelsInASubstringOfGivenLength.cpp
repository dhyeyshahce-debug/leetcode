// Last updated: 8/4/2026, 10:51:47 PM
class Solution {
public:
    bool vowel(char c)
    {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int count=0;
        int ans=0;
        while(j<s.size())
        {
            if(vowel(s[j]))
            {
                count++;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                ans=max(ans,count);
                 if(vowel(s[i]))
                 {
                    count--;
                 }
                 i++;
                 j++;
            }
           
        }
        return ans;
    }
};