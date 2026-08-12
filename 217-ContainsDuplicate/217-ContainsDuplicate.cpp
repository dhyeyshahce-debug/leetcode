// Last updated: 8/12/2026, 11:02:15 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4       int n=nums.size();
5       int low=0;
6       int high=n-1;
7       while(low<=high)
8       {
9         int mid=low+(high-low)/2;
10         if(nums[mid]==target)return mid;
11         if(nums[mid]<target)low=mid+1;
12         else high=mid-1;
13       }
14       return low;
15    }
16};