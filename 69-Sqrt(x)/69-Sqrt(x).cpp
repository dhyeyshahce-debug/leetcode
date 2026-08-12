// Last updated: 8/12/2026, 10:36:18 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4        if(x<2)return x;
5        long low=0;
6        long high=x/2;
7        while(low<=high)
8        {
9            long mid = low+(high-low)/2;
10            long square=mid*mid;
11            if(square==x)return mid;
12            if(square<x)low=mid+1;
13            else high=mid-1;
14        }
15        return (int)high;
16    }
17};