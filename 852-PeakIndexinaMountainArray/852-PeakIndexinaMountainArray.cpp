// Last updated: 8/15/2026, 10:56:10 PM
1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4        int n=arr.size();
5        int low=0;
6        int high=n-1;
7        while(low<high)
8        {
9            int mid=low+(high-low)/2;
10            if(arr[mid]>arr[mid+1])
11            {
12                high=mid;
13            }
14            else
15            {
16                low=mid+1;
17            }
18        }
19        return low;
20    }
21};