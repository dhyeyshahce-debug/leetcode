// Last updated: 7/12/2026, 11:34:48 PM
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>unique(candyType.begin(),candyType.end());
        int n=candyType.size()/2;
        if(n>unique.size()) return unique.size();
        else return n;
    }
};