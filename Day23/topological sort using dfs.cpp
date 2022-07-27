	void checktopo(int n,stack<int> &s,vector<int> &visited,vector<int> adj[])
	{
	    visited[n]=1;
	    for(auto it:adj[n])
	    {
	        if(visited[it]==0)
	        {
	            
	            checktopo(it,s,visited,adj);
	        }
	    }
	    s.push(n);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> visited(V+1,0);
	    stack<int> s;
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
	        {
	            checktopo(i,s,visited,adj);
	        }
	    }
	    vector<int> ans;
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	    
	}
