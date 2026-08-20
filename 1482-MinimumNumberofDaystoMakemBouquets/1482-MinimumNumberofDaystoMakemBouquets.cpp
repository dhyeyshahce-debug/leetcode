// Last updated: 8/20/2026, 10:08:28 PM
1class Solution {
2public:
3    int minDays(vector<int>& bloomDay, int m, int k) {
4        int n=bloomDay.size();
5        if((long long)m*k>n)return -1;
6        int low=INT_MAX;
7        int high=0;
8        for(int i=0;i<n;i++)
9        {
10            low=min(low,bloomDay[i]);
11            high=max(high,bloomDay[i]);
12        }
13        while(low<=high)
14        {
15            int mid=low+(high-low)/2;
16
17            int flowers=0;
18            int bouquet=0;
19            for(int i=0;i<n;i++)
20            {
21                if(bloomDay[i]<=mid)
22                {
23                    flowers++;
24                    if(flowers==k)
25                    {
26                        bouquet++;
27                        flowers=0;
28                    }
29                }
30                 else{
31                        flowers=0;
32                    }
33            }
34            if(bouquet>=m)high=mid-1;
35            else low=mid+1;
36        }
37        return low;
38    }
39};