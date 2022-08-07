class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int left[heights.size()];
        int right[heights.size()];
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            if(st.empty())
                left[i]=0;
            else
                left[i]=st.top()+1;
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            if(st.empty())
                right[i]=heights.size()-1;
            else
                right[i]=st.top()-1;
            st.push(i);
        }
        int maxarea=INT_MIN;
        for(int i=0;i<heights.size();i++)
        {
            int area=heights[i]*(right[i]-left[i]+1);
            
                maxarea=max(area,maxarea);
        }
        return maxarea;
    }
};
