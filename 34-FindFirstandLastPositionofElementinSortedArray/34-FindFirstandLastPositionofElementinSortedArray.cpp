// Last updated: 8/17/2026, 11:40:36 PM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7        int first=-1;
8        int last=-1;
9        //first occurance ->move towards left if we find tar==mid and store mid first and then move towards left high=mid-1;
10        while(low<=high)
11        {
12            int mid=low+(high-low)/2;
13            if(nums[mid]==target)
14            {
15                first=mid;
16                high=mid-1;
17            }
18            else if(nums[mid]>target)
19            {
20                high=mid-1;
21            }
22            else
23            {
24                low=mid+1;
25            }
26        }
27        //last occurance ->move towards right if we find tar==mid and store mid first and then move towards right low=mid+1;
28        low=0;
29        high=n-1;
30        while(low<=high)
31        {
32            int mid=low+(high-low)/2;
33            if(nums[mid]==target)
34            {
35                last=mid;
36                low=mid+1;
37            }
38            else if(nums[mid]>target)
39            {
40                high=mid-1;
41            }
42            else
43            {
44                low=mid+1;
45            }
46        }
47        return {first,last};
48    }
49};