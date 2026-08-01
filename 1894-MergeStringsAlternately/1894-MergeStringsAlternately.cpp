// Last updated: 8/1/2026, 11:34:20 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string res="";
        int left=0;
        int right=0;
        while(left<n1 && right<n2)
        {
            res+=word1[left++];
            res+=word2[right++];
        }
        while(left<n1)
        {
            res+=word1[left++];
        }
        while(right<n2)
        {
            res+=word2[right++];
        }
        return res;
    }
};