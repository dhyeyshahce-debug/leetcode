// Last updated: 7/24/2026, 5:02:13 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int low=0;
        int high=n-1;
        while(low<high)
        {
                swap(s[low],s[high]);
                low++;
                high--;
        }
    }
};