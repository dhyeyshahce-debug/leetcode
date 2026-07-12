// Last updated: 7/12/2026, 11:35:28 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long reverse=0;
        if (x < 0) return false;
        while(num>0)
        {
            int digit=num%10;
            reverse=reverse*10+digit;
            num=num/10;
        }
       return x==reverse;
    }
};