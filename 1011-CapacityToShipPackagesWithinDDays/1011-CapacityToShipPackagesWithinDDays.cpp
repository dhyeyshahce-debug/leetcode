// Last updated: 8/19/2026, 7:44:57 PM
1class Solution {
2public:
3    int smallestDivisor(vector<int>& nums, int threshold) {
4        int n=nums.size();
5        int low=1;
6        int high=0;
7        int ans=0;
8        for(int i=0;i<n;i++)
9        {
10            high=max(high,nums[i]);
11        }
12        while(low<=high)
13        {
14            int mid=low+(high-low)/2;
15            int sum=0;
16            for(int i=0;i<n;i++)
17            {
18                sum+=ceil((double)nums[i]/mid);
19            }
20            if(sum<=threshold)
21            {
22                ans=mid;
23                high=mid-1;
24            }
25            else{
26                low=mid+1;
27            }
28        }
29        return ans;
30    }
31};