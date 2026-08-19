// Last updated: 8/19/2026, 7:38:53 PM
1class Solution {
2public:
3    int minSpeedOnTime(vector<int>& dist, double hour) {
4        int n=dist.size();
5        int low=1;
6        int high=(int)1e7;
7        int ans=-1;
8
9        while(low<=high)
10        {
11            int mid=low+(high-low)/2;
12            double time=0;
13            //we don't need to calculate last value
14            for(int i=0;i<n-1;i++)
15            {
16               time += ceil((double)dist[i] / mid);
17            }
18            //last value is not calculated 
19            time+=(double)dist.back()/mid;
20            
21            if(time<=hour)
22            {
23                ans=mid;
24                high=mid-1;
25            }
26            else 
27            {
28                low=mid+1;
29            }
30        }
31        return ans;
32    }
33};