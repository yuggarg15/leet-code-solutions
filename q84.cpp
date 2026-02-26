class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> back ;
        vector<int> front ; 
        stack<int> st ;
        int n = heights.size() ;
        for(int i = 0 ; i < n ; i++){
            while((!st.empty())&&(heights[st.top()]>=heights[i])){
                st.pop();
            }
            if(st.empty()){
                front.push_back(i);
                st.push(i);
                continue;
            } else if(heights[st.top()]<heights[i]){
                front.push_back(i-st.top()-1);
                st.push(i);
            }
        }
        st = stack<int>();
        for(int i = n-1 ; i >= 0 ; i--){
            while((!st.empty())&&(heights[st.top()]>=heights[i])){
                st.pop();
            }
            if(st.empty()){
                back.push_back(n-1-i);
                st.push(i);
                continue;
            } else if(heights[st.top()]<heights[i]){
                back.push_back(st.top()-i-1);
                st.push(i);
            }
        }
        reverse(back.begin(), back.end());
        int maxarea = 0 ; 
        for(int i = 0 ; i < n ; i ++){
            maxarea = max(maxarea,(heights[i]*(front[i]+back[i]+1)));
        }
        return maxarea;
    }
};
