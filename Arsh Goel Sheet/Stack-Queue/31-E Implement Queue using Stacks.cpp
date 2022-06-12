/* One stak will store all the data as we peek or pop it will tack alll out from st1 to st2 so the order will reverse and works like a queue.
*/
class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.size() == 0){
            while(st1.size()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int rt = st2.top();
        st2.pop();
        return rt;
    }
    
    int peek() {
        if(st2.size() > 0)
            return st2.top();
        while(st1.size()){
            st2.push(st1.top());
            st1.pop();
        }
        return st2.top();
    }
    
    bool empty() {
        if(st1.size() == 0 && st2.size() == 0)
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */