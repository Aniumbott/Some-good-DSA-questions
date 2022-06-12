/*
We make a stack of the char and their count and ckeck if they count is equal to the k then we rebuild the string from it.
*/
class Solution {
public:
    
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(auto ch:s){
            if(!st.empty() && st.top().first == ch){
                if(st.top().second == k-1) st.pop();
                else st.top().second ++;
            }
            else st.push({ch,1});
        }
        string rt="";
        while(!st.empty()){
            while(st.top().second --> 0)
                    rt += st.top().first; 
            st.pop();
        }
        for(int i=0; i<rt.size()/2; i++){
            swap(rt[i], rt[rt.size() - i - 1]);
        }
        return rt;
    }
};