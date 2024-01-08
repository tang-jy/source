#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- \n"
#define first l
#define second r
#define push_back pb
#define push pb
#define endl "\n"
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
#define ls ( p << 1 )
#define rs ( p << 1 ) | 1 
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long ull;
const int N = 2e5+10 ;
const int MOD = 998244353;
int num[N];

struct tree {
    int l,r;
    int val;
    int mul,add;
}tr[N<<2];
void push_up (int p){
    tr[p].val = (tr[ls].val + tr[rs].val)%MOD;
}

void build  (int l,int r,int p){ // 所求的区间和当前的点
    tr[p].l = l;
    tr[p].r = r;
    tr[p].mul = 1;
    if(l==r) {
        tr[p].val = num[l];
        return;
    }
    int mid = (l + r)>>1;
    build(l,mid,ls);
    build(mid+1,r,rs);
    push_up(p);
}
void push_down(int p){
    int mid = (tr[p].l + tr[p].r )>> 1;
    int fr = tr[p].r;
    int fl = tr[p].l;
    tr[ls].add = (tr[ls].add*tr[p].mul%MOD + tr[p].add)%MOD;
    tr[rs].add = (tr[rs].add*tr[p].mul%MOD + tr[p].add)%MOD;
    tr[ls].mul = (tr[ls].mul*tr[p].mul)%MOD;
    tr[rs].mul = (tr[rs].mul*tr[p].mul)%MOD;
    tr[ls].val = (tr[ls].val*tr[p].mul%MOD + tr[p].add*(mid+1-fl)%MOD)%MOD;
    tr[rs].val = (tr[rs].val*tr[p].mul%MOD + tr[p].add*(fr-mid)%MOD)%MOD;
    tr[p].add = 0;
    tr[p].mul = 1;
    return;
} 
void operate (bool op,int val,int l,int r,int p){ 
    //操作类型和顶点和val与当前的点pos
    if(tr[p].l>r||tr[p].r<l) return;
    if(tr[p].l>=l&&tr[p].r<=r) {
        if(op) { //add
            tr[p].val = (tr[p].val +(r-l+1)* val%MOD) % MOD;
            tr[p].add = (tr[p].add + val)%MOD;
        }
        else {
            tr[p].val = (tr[p].val * val)%MOD;
            tr[p].mul = (tr[p].mul * val)%MOD;
            tr[p].add = (tr[p].add * val)%MOD;
        }
        return;
    }
    push_down(p);
    operate(op,val,l,r,rs);
    operate(op,val,l,r,ls);
    push_up(p);
    return;
}
int qpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

void Get_res(int p){
    int fr = tr[p].r;
    int fl = tr[p].l;
    if(fr==fl){//cout<<p<<" ";
        if(fl!=1) cout<<' ';
        cout<<tr[p].val;
        //cout<<endl;
        return;
    }
    push_down(p);
    Get_res(ls);
    Get_res(rs);
}

void solve(){
    int n,m;
    cin>>n>>m;
    
    rep(i,1,n)
        cin>>num[i];
    build (1,n,1);
    while(m--){
        int l,r,val;
        cin>>l>>r>>val;
        int sum = (r-l)*qpow(r-l+1,MOD-2)%MOD; //len - 1 / len 变成乘以len的逆元
        operate(false,sum,l,r,1);
        sum = val*qpow(r-l+1,MOD-2)%MOD;
        operate(true,sum,l,r,1);
    }
    Get_res (1);
}


int32_t main() {
IOS;
    int T = 1;
    //cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}
