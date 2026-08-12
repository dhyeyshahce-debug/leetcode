// Last updated: 8/12/2026, 10:38:42 PM
class Solution {
public:
    int mySqrt(int x) {
        if(x<2)return x;
        long low=0;
        long high=x/2;
        while(low<=high)
        {
            long mid = low+(high-low)/2;
            long square=mid*mid;
            if(square==x)return mid;
            if(square<x)low=mid+1;
            else high=mid-1;
        }
        return (int)high;
    }
};