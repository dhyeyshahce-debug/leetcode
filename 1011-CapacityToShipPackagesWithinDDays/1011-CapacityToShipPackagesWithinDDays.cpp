// Last updated: 8/19/2026, 7:14:34 PM
1class Solution {
2public:
3    int shipWithinDays(vector<int>& weights, int days) {
4        int n=weights.size();
5        int low=0;
6        int high=0;
7        for(int i=0;i<n;i++)
8        {
9            low=max(low,weights[i]);
10            high+=weights[i];
11        }
12        while(low<=high)
13        {
14            int mid=low+(high-low)/2;
15            int total_days=1;
16            int sum=0;
17            for(int i=0;i<n;i++)
18            {
19                if(sum + weights[i]<=mid)
20                {
21                    sum+=weights[i];
22                }
23                else{
24                    total_days++;
25                    sum=weights[i];
26                    /*if that sum+weights overfit the weights then store that weight in whole container like in testcase 1 3rd day 8+9=17>15 so store 8 on day 3 */
27                }
28            }
29            if(total_days<=days)
30            {
31                high=mid-1;
32            }
33            else 
34            {
35                low=mid+1;
36            }
37        }
38        return low;
39    }
40};