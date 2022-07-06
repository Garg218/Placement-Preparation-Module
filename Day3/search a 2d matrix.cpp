class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int l=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int h=m*n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(target==matrix[mid/m][mid%m])
                return true;
            else if(target>matrix[mid/m][mid%m])
                l=mid+1;
            else
                h=mid-1;
            
        }
        return false;
       
    }
};
