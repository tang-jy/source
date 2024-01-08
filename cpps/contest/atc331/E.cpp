#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int null = 0x3f3f3f3f;
void solve(){
    int n,m,q,ans;
    cin>>n>>m>>q;
    vector <int> a(n+1);
    vector <pll> b(m+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int t;
        cin>>t;
        b[i].first = t;
        b[i].second = i;
    }
    sort(b.begin ()+1,b.end());
    map <int ,int> mp[N];
    
    while(q--){
        int l,r;
        cin>>l>>r;
        mp[l][r] = 1;
    }
    for(int i=1;i<=n;i++){
        int pos = m;
        whlie(mp[i][b[pos].second]) pos--;
        if(pos) ans = max(ans,b[pos].first+a[i]);//cout<<b[pos].first<<" "<<pos<<endl;
    }
    cout<<ans<<endl;


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