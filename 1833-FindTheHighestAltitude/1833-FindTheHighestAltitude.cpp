// Last updated: 7/17/2026, 10:45:12 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int curr_alt=0;
        int max_alt=0;
        for(int i=0;i<n;i++)
        {
            curr_alt=curr_alt+gain[i];
            max_alt=max(max_alt,curr_alt);
        }
        return max_alt;
    }
};