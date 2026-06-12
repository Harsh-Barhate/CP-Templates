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
#define take(a, n) for (int i = 0; i < n; i++) cin >> a[i]
ll gcd(ll a, ll b) {{if(b==0) return a;} return gcd(b, a%b);}
ll nCr(ll n, ll r) {ll res=1; for(ll i=0;i<r;i++) {res=res*(n-i), res=res/(i+1);} return res;}
ll pw(ll a, ll b){if(b==0) return 1; if(b&1^1) {ll p = pw(a, b/2); return 1ll*p*p%MOD;} else{ll p = pw(a, (b-1)/2); return 1ll*p*p%MOD*a%MOD;}}
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_N = 1e5+7;
const int LOG = 17;
vector<vector<int>> m(MAX_N, vector<int>(LOG));
void preprocessing(int n, vector<int>& a){
    for(int i=0; i<n; i++){
        m[i][0] = a[i];
    }

    for(int j=1; j<LOG; j++){
        for(int i=0; i+(1<<j)-1<n; i++){
            m[i][j] = min(m[i][j-1], m[i+(1<<(j-1))][j-1]);
        }
    }
}

int query(int l, int r){
    int len = r-l+1;
    int k=0;
    while((1<<(k+1)) <= len) k++;
    return min(m[l][k], m[r-(1<<k)+1][k]);
}

void solve(){
    
}

int main(){
 
    fastio();
    Code By HARSH_BARHATE
    start = clock();
    int kitne_test_cases=1;
    // cin >> kitne_test_cases;
    while(kitne_test_cases--){
        solve();
    }
    duration = (clock() - start )/(double) CLOCKS_PER_SEC;
    // cout<<"time taken: "<< duration <<" sec"<<endl;
}
