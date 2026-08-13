// Last updated: 8/13/2026, 11:03:33 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int low = 0;
6        int high = n - 1;
7
8        while(low <= high) {
9            int mid = low + (high - low) / 2;
10
11            if(nums[mid] == target)
12                return mid;
13
14            // Left half is sorted
15            if(nums[low] <= nums[mid]) {
16                if(nums[low] <= target && target < nums[mid]) {
17                    high = mid - 1;
18                }
19                else {
20                    low = mid + 1;
21                }
22            }
23
24            // Right half is sorted
25            else {
26                if(nums[mid] < target && target <= nums[high]) {
27                    low = mid + 1;
28                }
29                else {
30                    high = mid - 1;
31                }
32            }
33        }
34
35        return -1;
36    }
37};