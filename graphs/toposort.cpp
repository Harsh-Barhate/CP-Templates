#include<bits/stdc++.h>
using namespace std;

std::clock_t start;
double duration;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define HARSH_BARHATE cout.tie(NULL);
#define ll long long
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
#define endl "\n"
const int MOD = 1e9+7;
const int INF = 1e9+7;
#define pb push_back
#define ppb pop_back
ll gcd(ll a, ll b) {{if(b==0) return a;} return gcd(b, a%b);}
ll nCr(ll n, ll r) {ll res=1; for(ll i=0;i<r;i++) {res=res*(n-i), res=res/(i+1);} return res;}
ll pw(ll a, ll b){if(b==0) return 1; if(b&1^1) {ll p = pw(a, b/2); return 1ll*p*p%MOD;} else{ll p = pw(a, (b-1)/2); return 1ll*p*p%MOD*a%MOD;}}
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

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

void solve(){
    
}

int main(){
 
    fastio();
    Code By HARSH_BARHATE
    start = clock();
    int kitne_test_cases;
    cin >> kitne_test_cases;
    while(kitne_test_cases--){
        solve();
    }
    duration = (clock() - start )/(double) CLOCKS_PER_SEC;
    // cout<<"time taken: "<< duration <<" sec"<<endl;
}