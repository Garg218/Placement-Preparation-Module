class Solution {
public:
    int find_max(vector<vector<int>>& grid,int i)
    {
        int maxi=INT_MIN;
        for(int k=0;k<grid.size();k++)
        {
            maxi=max(maxi,grid[i][k]);
        }
        return maxi;
    }
    int find_maxi(vector<vector<int>>& grid,int j)
    {
        int maxi=INT_MIN;
        for(int k=0;k<grid.size();k++)
        {
            maxi=max(maxi,grid[k][j]);
        }
        return maxi;
    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int a=find_max(grid,i);
                int b=find_maxi(grid,j);
                
                int n=min(a,b);
                ans=ans+ (abs(grid[i][j]-n));
            }
        }
        return ans;
    }
};
