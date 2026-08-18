// Last updated: 8/18/2026, 1:46:33 PM
1class Solution {
2public:
3    bool isVowel(char c)
4    {
5        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
6    }
7    string sortVowels(string s) {
8        vector<char>vowels;
9        for(int i=0;i<s.size();i++)
10        {
11            if(isVowel(s[i]))
12            {
13                vowels.push_back(s[i]);
14            }
15        }
16        sort(vowels.begin(),vowels.end());
17        int j=0;
18        for(int i=0;i<s.size();i++)
19        {
20            if(isVowel(s[i]))
21            {
22                s[i]=vowels[j++];
23            }
24        }
25      return s;
26    }
27};