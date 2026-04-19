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
