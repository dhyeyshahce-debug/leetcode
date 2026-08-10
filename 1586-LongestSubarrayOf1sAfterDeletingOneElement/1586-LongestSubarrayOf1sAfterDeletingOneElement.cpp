// Last updated: 8/10/2026, 11:25:22 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int n=nums.size();
       int l=0;
       int r=0;
       int zero=0;
       int ans=0;

       for(int r=0;r<n;r++)
       {
         if(nums[r]==0)zero++;
         while(zero>1)
         {
            if(nums[l]==0) zero--;
            l++;
         }
         ans=max(ans,r-l);
       }
       return ans;
    }
};