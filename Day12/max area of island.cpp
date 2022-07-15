class Solution {
public:
    void find(vector<vector<int>>& grid,int i,int j,int n,int m,int& ans)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)
            return ;
        if(grid[i][j]==-1)
            return ;
        ans+=1;
        grid[i][j]=-1;
        find(grid,i-1,j,n,m,ans);
        find(grid,i+1,j,n,m,ans);
        find(grid,i,j-1,n,m,ans);
        find(grid,i,j+1,n,m,ans);
        
        
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int area=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    find(grid,i,j,n,m,area);
                    
                    ans=max(ans,area);
                    area=0;
                }
            }
        }
        return ans;
        
    }
};
