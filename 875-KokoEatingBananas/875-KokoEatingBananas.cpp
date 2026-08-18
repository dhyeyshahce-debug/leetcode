// Last updated: 8/18/2026, 10:46:55 PM
1class Solution {
2public:
3    int minEatingSpeed(vector<int>& piles, int h) {
4        int low=1;
5        int high=0;
6        int ans=0;
7        for(int i=0;i<piles.size();i++)
8        {
9            high=max(high,piles[i]);
10        }
11        while(low<=high)
12        {
13            int mid=low+(high-low)/2;
14            long long hours=0;
15            for(int i=0;i<piles.size();i++)
16            {
17                hours+=ceil((double)piles[i]/mid);
18            }
19            if(hours<=h)
20            {
21                ans=mid;
22                high=mid-1;
23            }
24            else
25            {
26                low=mid+1;
27            }
28        }
29        return ans;
30    }
31};