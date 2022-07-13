class Solution {
public:
    bool static comparator(vector<int> a,vector<int> b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin(),b.end(),comparator);
        int ans=0;
        int left=t;
        for(int i=0;i<b.size();i++)
        {
            
            if(left==0)
                return ans;
            
            int n=b[i][0];
            if(n<=left)
            {
                left=left-b[i][0];
                ans+=n*b[i][1];
            }
            else
            {
                ans+=left*b[i][1];
                left=0;}
            
            
        }
        
        return ans;
    }
};
