void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, stack<int>& st){
    vis[node] = 1;
    for(auto child: adj[node]){
        if(!vis[child]){
            dfs(child, adj, vis, st);
        }
    }
    st.push(node);
}

vector<int> topoSort(int V, vector<vector<int>>& adj) {
    // code here
    vector<int> vis(V, 0);
    stack<int> st;
    for(int i=0; i<V; i++){
        if(!vis[i]) dfs(i, adj, vis, st);
    }
    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
}