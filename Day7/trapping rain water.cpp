class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        int n=height.size();
        int right[n];
        left.push_back(height[0]);
        for(int i=1;i<height.size();i++)
        {
            int l=max(left[i-1],height[i]);
            left.push_back(l);
        }
        
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            int r=max(right[i+1],height[i]);
            right[i]=r;
        }

        int sum=0;
        for(int i=0;i<n;i++)
        {
            int v=min(right[i],left[i])-height[i];
            sum+=v;
        }
        return sum;
    }
};
