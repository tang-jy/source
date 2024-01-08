#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- ";
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int null = 0x3f3f3f3f;
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
void solve(){
    int n,t;
    cin>>n>>t;
    vector <int> a(n+1);
    vector <int> b(n+1);
    rep (i,0,n) cin>>a[i];
    rep (i,0,n) cin>>b[i];
    int res = -1e3,pos = 0;
    rep (i,0,n) {
        if(t <= 0) break;
        if(t<a[i]){ t--;continue;}
        else {
            if(res < b[i]){
                res = b[i];
                pos = i+1;
            }
            t--;
        }
    }
    cout<<((res==-1e3)?-1:pos) <<endl;
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