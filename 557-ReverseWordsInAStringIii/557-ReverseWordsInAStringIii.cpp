// Last updated: 7/31/2026, 11:16:15 PM
class Solution {
public:
    string reverseWords(string s) {
       int n=s.size();
       int left=0;
       int right=0;
       while(right<=n)
      {
         if(right==n || s[right]==' ')
         {
            int start = left;
            int end = right-1;

            while(start < end)
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }

            left=right+1;
         }
         right++;
      }
     return s;
    }
};