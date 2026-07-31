// Last updated: 8/1/2026, 12:05:14 AM
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a, b;

        for(char c : s) {
            if(c != '#')
                a.push_back(c);
            else if(!a.empty())
                a.pop_back();
        }

        for(char c : t) {
            if(c != '#')
                b.push_back(c);
            else if(!b.empty())
                b.pop_back();
        }

        return a == b;
    }
};