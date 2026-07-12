// Last updated: 7/12/2026, 11:34:50 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int child=0;
     int i=0,j=0;
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());
     while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            child++;
            i++;
            j++;
        }
        else{
            j++;
        }
     }
     return child;
    }
};