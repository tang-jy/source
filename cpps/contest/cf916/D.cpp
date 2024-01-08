#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- ";
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1;
const int null = 0x3f3f3f3f;
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
void solve(){
    int n;
    cin>>n;
    vector <pll> a(n+1),b(n+1),c(n+1);
    rep(i,1,n) cin>>a[i].first,a[i].second=i;
    rep(i,1,n) cin>>b[i].first,b[i].second=i;
    rep(i,1,n) cin>>c[i].first,c[i].second=i;
    sort(a.begin()+1,a.end(),greater <pll>());
    sort(b.begin()+1,b.end(),greater <pll>());
    sort(c.begin()+1,c.end(),greater <pll>());
    int res = -1;
    rep(i,1,3){
        rep(j,1,3){
            rep(x,1,3){
                if(a[i].second==b[j].second||a[i].second==c[x].second||c[x].second==b[j].second)
                continue;
                res = max(res,a[i].first+b[j].first+c[x].first);
            }
        }
    }
    cout<<res<<endl;
}
int32_t main() {
   IOS;
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}