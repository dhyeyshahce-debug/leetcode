// Last updated: 8/11/2026, 10:27:22 PM
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int ans=0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            mp[nums[r]]++;
            while(mp[nums[r]]>1)
            {
                sum-=nums[l];
                mp[nums[l]]--;
                l++;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};