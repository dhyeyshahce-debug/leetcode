// Last updated: 7/12/2026, 11:35:22 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        stack<int>st;

        for(int x:digits)
        {
            st.push(x);
        }

        int carry=1;
        vector<int>ans;

        while(!st.empty())
        {
            int sum=st.top()+carry;
            st.pop();
            ans.push_back(sum%10);
            carry=sum/10;
        }
        if(carry)
            ans.push_back(carry);

         reverse(ans.begin(), ans.end());
         return ans;
    }
};