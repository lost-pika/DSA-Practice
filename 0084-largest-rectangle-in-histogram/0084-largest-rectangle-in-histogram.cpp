class Solution {
public:
    vector<int> nextSmallerElement(vector<int>&arr){
        int size = arr.size();
        vector<int> ans(size);
        stack<int> st;
        st.push(-1);

        for(int i=size-1; i>=0; i--){
            int currElement = arr[i];
            while (st.top() != -1 && arr[st.top()] >= currElement)
            {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);        
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>&arr){
        int size = arr.size();
        vector<int> ans(size);
        stack<int> st;
        st.push(-1);

        for(int i=0; i<size; i++){
            int currElement = arr[i];
            while (st.top() != -1 && arr[st.top()] >= currElement)
            {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);        
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextSmallerElement(heights);
        for(int i=0; i<next.size(); i++){
            if(next[i] == -1){
                next[i] = next.size();
            }
        }
        vector<int> prev = prevSmallerElement(heights);
        int maxArea = INT_MIN;

        for(int i=0; i<heights.size(); i++){
            int height = heights[i];
            int width = next[i] - prev[i] - 1;
            int currArea = width * height;
            maxArea = max(maxArea, currArea);
        }
        return maxArea;
    }
};