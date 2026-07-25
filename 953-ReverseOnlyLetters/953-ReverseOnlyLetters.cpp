// Last updated: 7/25/2026, 8:03:05 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
       int n=s.size();
       int start=0;
       int end=n-1; 

       while(start<end){
         while(start<end && !isalpha(s[start]))start++;
         while(start<end && !isalpha(s[end]))end--;

         swap(s[start],s[end]);
         start++;
         end--;
       }
       return s;
    }
};