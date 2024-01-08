#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e2+10;
const int null = 0x3f3f3f3f;
int dp[N];
void solve(){
    int a,b,c;
    int n;
    cin>>n>>a>>b>>c;
    memset (dp,0x3f,sizeof dp);
    dp[0] = 0;
    for(int i=1;i<=n+12;i++){
        if(i>=6) dp[i] = dp[i-6]+a;
        if(i>=8) dp[i] = min (dp[i-8]+b,dp[i]);
        if(i>=12) dp[i] = min(dp[i-12]+c,dp[i]);
    }
    int ans = 1e8;
    for(int i=n;i<=n+12;i++){
        ans = min(ans,dp[i]);
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