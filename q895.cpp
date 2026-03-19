//First Attempt
class FreqStack {
public:
    stack<pair<int, int>> st;
    unordered_map<int, int> m;

    FreqStack() {}
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
            m[val]++;
        } else {
            m[val]++;
            int a = 0;
            if (m[val] >= (m[st.top().second])) {
                a = val;
            } else {
                a = st.top().second;
            }
            st.push({val, a});
        }
    }

    int pop() {
        stack<int> st2;
        int a = st.top().second;
        while (st.top().first != a) {
            st2.push(st.top().first);
            m[st.top().first]--;
            st.pop();
        }
        m[st.top().first]--;
        st.pop();
        while (!st2.empty()) {
            int val = st2.top();
            st2.pop();
            if (st.empty()) {
                st.push({val, val});
                m[val]++;
            } else {
                m[val]++;
                int a = 0;
                if (m[val] >= (m[st.top().second])) {
                    a = val;
                } else {
                    a = st.top().second;
                }
                st.push({val, a});
            }
        }
        return a;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
