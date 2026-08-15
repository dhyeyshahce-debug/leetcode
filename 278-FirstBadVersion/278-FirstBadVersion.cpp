// Last updated: 8/15/2026, 11:19:47 PM
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int low=1;
14        int high=n;
15        while(low<=high)
16        {
17            int mid=low+(high-low)/2;
18            if(guess(mid)==0)return mid;
19            else if(guess(mid)==-1)high=mid-1;
20            else low=mid+1;
21        } 
22        return -1;
23    }
24};