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

class SGTree{
    vector<int> seg;

public:
    SGTree(int n){
        seg.resize(4*n+1);
    }

    void build(int ind, int low, int high, vector<int>& arr){
        // BC
        if(low == high){
            seg[ind] = arr[low];
            return;
        }

        // R
        int mid = low + (high-low)/2;
        build(2*ind+1, low, mid, arr);
        build(2*ind+2, mid+1, high, arr);
        seg[ind] = max(seg[2*ind+1], seg[2*ind+2]);
    }

    int query(int ind, int low, int high, int l, int r){
        // no overlap
        // [l ... r] [low ... high] OR [low ... high] [l ... r] 
        if(low>r || l>high) return INT_MIN;

        // complete overlap
        // [l ... [low .. high] ... r]
        if(low >= l && high <= r) return seg[ind];

        // partial overlap
        // [l ... [low ... r] ... high]   OR   [low ... [l ... high] ... r]
        int mid = low + (high-low)/2;
        int left = query(2*ind+1, low, mid, l, r);
        int right = query(2*ind+2, mid+1, high, l, r);
        return max(left, right);
    }

    void update(int ind, int low, int high, int i, int val){
        // BC
        if(low == high){
            seg[ind] = val;
            return;
        }

        // R
        int mid = low+(high-low)/2;
        if(i <= mid) update(2*ind+1, low, mid, i, val);
        else update(2*ind+2, mid+1, high, i, val);

        seg[ind] = max(seg[2*ind+1], seg[2*ind+2]);
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
