class DisjointSet{
    public:
        vector<int> parent, size;
        DisjointSet(int n){
            parent.resize(n+1);
            size.resize(n+1, 1);
            iota(parent.begin(), parent.end(), 0);
        }

        int findUlp(int u){
            if(parent[u] == u) return u;
            return parent[u] = findUlp(parent[u]);
        }

        void UnionBySize(int u, int v){
            int ulp_u = findUlp(u);
            int ulp_v = findUlp(v);
            if(ulp_u == ulp_v) return;
            if(size[ulp_u] < size[ulp_v]){
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }else{
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }
};
