// Last updated: 8/15/2026, 11:06:56 PM
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int low=1;
8        int high=n;
9        while(low<high)
10        {
11            int mid=low+(high-low)/2;
12            if(isBadVersion(mid))
13            {
14                high=mid;
15            }
16            else
17            {
18                low=mid+1;
19            }
20        }
21        return low;
22    }
23};