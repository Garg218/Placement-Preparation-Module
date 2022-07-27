vector<int> ans;
    void dfs(int V,vector<int> &vis,vector<int> adj[],int i)
    {
        
            ans.push_back(i);
            vis[i]=1;
        
        
        for(auto it:adj[i])
        {
            if(!vis[it])
            dfs(V,vis,adj,it);
            
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0);
        dfs(V,vis,adj,0);
        return ans;
    }
