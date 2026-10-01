#include<bits/stdc++.h>
using namespace std;

std::clock_t start;
double duration;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define HARSH_BARHATE cout.tie(NULL);
#define int long long
#define ll long long
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
#define cminus cout<<"-1\n"
#define chere cout<<"here\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define take(a, n) for (int i = 0; i < n; i++) cin >> a[i]

const int MOD = 1e9+7;
const int INF = 1e9+7;

ll gcd(ll a, ll b) {{if(b==0) return a;} return gcd(b, a%b);}
ll nCr(ll n, ll r) {ll res=1; for(ll i=0;i<r;i++) {res=res*(n-i), res=res/(i+1);} return res;}
ll pw(ll a, ll b){if(b==0) return 1; if(b&1^1) {ll p = pw(a, b/2); return 1ll*p*p%MOD;} else{ll p = pw(a, (b-1)/2); return 1ll*p*p%MOD*a%MOD;}}

vector<int> get_kmp(string& s){
    int n = s.size();
    vector<int> kmp(n+1);
    kmp[0] = -1;
    int i=0, j=-1;
    while(i < n){
        while(j!=-1 && s[i] != s[j]) j = kmp[j];
        i++, j++;
        kmp[i] = j;
    }
    return kmp;
}

void solve(){
    string s; cin >> s;
    vector<int> kmp = get_kmp(s);   
}

signed main(){
 
    Code By HARSH_BARHATE
    start = clock();
    // freopen("shell.in", "r", stdin);
    // freopen("shell.out", "w", stdout);
    int kitne_test_cases;
    cin >> kitne_test_cases;
    while(kitne_test_cases--){
        solve();
    }
    duration = (clock() - start )/(double) CLOCKS_PER_SEC;
    // cout<<"time taken: "<< duration <<" sec"<<endl;
}
