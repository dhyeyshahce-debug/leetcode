// Last updated: 8/15/2026, 10:46:24 PM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7
8        while(low<high)
9        {
10            int mid=low+(high-low)/2;
11            if(nums[mid]>nums[mid+1])high=mid;
12            else low=mid+1;
13        }
14        return low;
15    }
16};