class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int>q;
        int V=adj.size();
        vector<bool>visited(V,0);
        vector<int>ans;
        q.push(0);
        visited[0]=1;
        int node;
        while(!q.empty())
        {
            node=q.front();
            q.pop();
            ans.push_back(node);
            for(int i=0;i<adj[node].size();i++)
            {
                if(!visited[adj[node][i]])
                {
                    visited[adj[node][i]]=1;
                    q.push(adj[node][i]);
                }
            }
            
        }
        return ans;
    }
};