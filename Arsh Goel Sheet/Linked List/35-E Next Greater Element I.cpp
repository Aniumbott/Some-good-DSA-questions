/*
Mapping the sub set array elements with their indexes.
Iterating the main array in reverse and with the help of concept Monotonic Stack we can have the next grater element for the current element,
Then storing the ans for the asked values in a new array and return it.
*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        vector<int> rt(nums1.size());
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]] = i;
        }
        
        for(int i=nums2.size()-1; i>=0; i--){
            while(!st.empty() && nums2[i] > st.top())
                st.pop();
            if(mp.find(nums2[i])!=mp.end()){
                if(!st.empty())
                    rt[mp[nums2[i]]] = st.top();
                else
                    rt[mp[nums2[i]]] = -1;
            }
            st.push(nums2[i]);
        }
        return rt;
    }
};