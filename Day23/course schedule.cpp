class Solution {
public:
    
    bool dfs(int node,vector<int> &vis,vector<int> &dfsvis,vector<int> adj[])
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,vis,dfsvis,adj))
                    return true;
            }
            else if(dfsvis[it]==1)
                return true;
        }
        dfsvis[node]=0;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> vis(n,0);
        vector<int> dfsvis(n,0);
        vector<int> adj[n];
        for(int i=0;i<p.size();i++)
        {
            adj[p[i][0]].push_back(p[i][1]);
        }
        for(int i=0;i<n;i++)
        {
            if(dfs(i,vis,dfsvis,adj))
                return false;
        }
        
        return true;
    }
};
