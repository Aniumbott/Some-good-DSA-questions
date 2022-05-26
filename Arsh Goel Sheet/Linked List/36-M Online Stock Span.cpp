/*
With the concept of monotonic stack we can track of all greater element indeces and to store all elements we can use vector.
Another better approach can also be with the stack of pairs of price and its ans and basically all newer prices > the top one will have the ans = addition of all ans of lower pairs in the monotonic stack
*/
class StockSpanner {
public:
    int i=0;
    stack<int> st;
    vector<int> v;
    StockSpanner() {
        
    }
    
    int next(int price) {
        v.push_back(price);
        while(!st.empty() && price >= v[st.top()] )
            st.pop();
    
        int a =st.empty()?-1:st.top();
        st.push(i);
        i++;
        return i-a-1;
    }
};