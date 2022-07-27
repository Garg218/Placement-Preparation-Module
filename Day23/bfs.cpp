vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        queue<int> q;
        q.push(0);
        vis[0]=1;
vector<int> ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            int i=q.front();
            q.pop();
            for(auto it:adj[i])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        
        return ans;
    }
