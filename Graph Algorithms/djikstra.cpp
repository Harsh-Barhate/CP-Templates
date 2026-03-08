vector<int> Djikstra(int n, vector<vector<pair<int, int>>>& adj, int src){
    // n nodes
    vector<int> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});    // {dist, node}
    dist[src] = 0;

    while(!pq.empty()){
        int node = pq.top().second;
        int val = pq.top().first;
        pq.pop();
        for(auto child: adj[node]){
            int adjNode = child.first;
            int adjValue = child.second;
            if(dist[node] + adjValue < dist[adjNode]){
                dist[adjNode] = dist[node] + adjValue;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}
