/*
A solution wiht monotonic stack to see how it works try testing 1 5 6 3 2 8 10 by self and ans will be 1 1 3 2 1 1 0
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        vector<int> rt(t.size());
        for (int i = 0; i < t.size(); i++) {
            while (!st.empty() && t[st.top()] < t[i])
            {
                rt[st.top()] = i - st.top();   
                st.pop();
            }
            st.push(i);
        }
        return rt;
    }
};