class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int c=colsum.size();
        vector<vector<int>> ans(2,vector<int> (c,0));
        int j=0;
        while(j<c)
        {
            if(colsum[j]==2)
            {
                ans[1][j]=1;
                ans[0][j]=1;
                upper--;
                lower--;
            }
            else if(colsum[j]==1)
            {
                if(upper>lower)
                {
                    ans[0][j]=1;
                    upper--;
                }
                else
                {
                    ans[1][j]=1;
                    lower--;
                }
            }
            j++;
        }
        
        if(lower!=0 || upper!=0)
            return {};
        
        return ans;
        
        
    }
};
