// Last updated: 7/12/2026, 11:35:26 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=0;

        while(left<right)
        {
            int w=right-left;
            int h=min(height[left],height[right]);
            int max_water=w*h;

            ans=max(ans,max_water);

            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return ans;
    }
};