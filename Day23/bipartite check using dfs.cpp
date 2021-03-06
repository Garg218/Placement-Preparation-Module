class Solution {
public:
    bool check(int u,vector<int> &color,vector<vector<int>> &graph)
    {
        if(color[u]==-1)
            color[u]=1;
        for(auto &it:graph[u])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[u];
                if(!check(it,color,graph))
                    return false;
                
            }
            else if(color[it]==color[u])
                    return false;
        }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
            for(int i=0;i<n;i++)
            {
                if(color[i]==-1)
                {
                    if(!check(i,color,graph))
                        return false;
                }
            }
        
        return true;
    }
};
