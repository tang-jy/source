#include"bits/stdc++.h"

using namespace std;
using i64 = long long;
using LL = long long;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define cr "\n"
#define endl "\n"
#define lson k+k //二叉树左儿子
#define rson k+k+1 //二叉树右儿子
#define pb push_back
#define ppb pop_back
#define X first
#define Y second
#define pii pair<int,int>
#define rep(i,k,n) for(int i=k;i<=n;i++)
#define per(i,k,n) for(int i=k;i>=n;i--)
#define mem(name,number) memset(name,number,sizeof(name))
#define mem1(name,n,k) for(int i=0;i<n;i++) name[i]=k //初始化一维数组
#define mem2(name,n,m,k) for(int i=0;i<n;i++) for(int j=0;j<m;j++) name[i][j]=k //初始化二维数组
#define vint vector<int>::iterator
#define vl vector<ll>::iterator
#define sint set<int>::iterator
#define sl set<ll>::iterator
#define msint multiset<int>::iterator
#define msl multiset<ll>::iterator
#define int long long
#define e 1000000000LL
#define mod 998244353LL
#define _size 100000
//iota

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin>>n;

    vector<pii>a(n+1);
    rep(i, 1, n-1) {
        cin>>a[i].X>>a[i].Y;
    }

    sort(a.begin() + 1, a.end(), [&](pii& x, pii& y) {
        if(x.X==y.X) return x.Y>y.Y;
        return x.X>y.X;
        });

    int q;
    cin>>q;
    while (q--) {
        int x,y,z;
        cin>>x>>y>>z;
        if(a[z].X<x||(a[z].X==x&&a[z].Y<=y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    //cin>>t;
    while (t--)  solve();

    return 0;
}