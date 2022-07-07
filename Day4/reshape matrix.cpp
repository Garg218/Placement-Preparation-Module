class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        int col=0,row=0;
        vector<vector<int>> ans(r,vector<int> (c));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[row][col]=mat[i][j];
                    col++;
                if(c==col)
                {
                    col=0;
                    row++;
                }
                
            }
        }
        return ans;
    }
};
