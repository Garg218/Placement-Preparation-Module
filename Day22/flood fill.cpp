class Solution {
public:
    void find(vector<vector<int>> &image,int color,int newColor,int sr,int sc,int n,int m)
    {
        if(sr<0 ||sc<0 ||sr>=n ||sc>=m ||image[sr][sc]!=color || image[sr][sc]==newColor)
            return;
       
            image[sr][sc]=newColor;
        find(image,color,newColor,sr+1,sc,n,m);
        find(image,color,newColor,sr-1,sc,n,m);
        find(image,color,newColor,sr,sc+1,n,m);
        find(image,color,newColor,sr,sc-1,n,m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        
        int color=image[sr][sc];
        find(image,color,newColor,sr,sc,n,m);
        return image;
    }
};
