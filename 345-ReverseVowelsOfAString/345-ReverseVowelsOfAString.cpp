// Last updated: 7/25/2026, 8:03:24 PM
class Solution {
public:
   bool isvowel(char ch){
         ch=tolower(ch);

          return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
    }  

    string reverseVowels(string s) {
       int n=s.size();
       int left=0;
       int right=n-1;

       while(left<right)
       {
         while(left<right && !isvowel(s[left])) left++;
         while(left<right && !isvowel(s[right])) right--;
         
         swap(s[left], s[right]);
         left++;
         right--;
       }
       return s;
    }
};