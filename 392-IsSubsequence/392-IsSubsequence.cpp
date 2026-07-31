// Last updated: 8/1/2026, 12:35:54 AM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        int left=0;
        int right=0;
        while(left<n1 && right<n2)
        {
            if(s[left]==t[right])
            {
                left++;
            }
            right++;
        }
        return left==n1;
    }
};