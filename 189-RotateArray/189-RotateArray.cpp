// Last updated: 8/16/2026, 11:17:56 PM
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n=nums.size();
5        k=k%n;//like if k==num size or more eg num.size()==5 and it says k=7 then we don't have to do 7 times instead rotate only twice
6
7        //[1,2,3,4,5,6,7]k=3 3%7=3
8        reverse(nums.begin(),nums.end());//[7,6,5,4,3,2,1]
9        reverse(nums.begin(),nums.begin()+k);//[0,0+3=3] [5,6,7,4,3,2,1]
10        reverse(nums.begin()+k,nums.end());//[3,6][5,6,7,1,2,3,4]
11    }
12};