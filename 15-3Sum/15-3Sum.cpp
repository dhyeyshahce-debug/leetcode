// Last updated: 8/20/2026, 11:31:00 PM
1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n=height.size();
5        vector<int>prefix(n);
6        vector<int>suffix(n);
7        int ans=0;
8        prefix[0]=height[0];
9        for(int i=1;i<n;i++)
10        {
11            prefix[i]=max(prefix[i-1],height[i]);
12        }
13        suffix[n-1]=height[n-1];
14        for(int i=n-2;i>=0;i--)
15        {
16            suffix[i]=max(suffix[i+1],height[i]);
17        }
18        for(int i=0;i<n;i++)
19        {
20            int min_water=min(prefix[i],suffix[i]);
21            ans+=min_water-height[i];
22        }
23     return ans;
24    }
25};