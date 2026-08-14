// Last updated: 8/14/2026, 6:17:36 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7        while(low<high)
8        {
9            int mid=low+(high-low)/2;
10            if(nums[mid]>nums[high])low=mid+1;
11            else high=mid;
12        }
13        return nums[low];
14    }
15};