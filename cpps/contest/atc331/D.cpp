#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e3+10;
const int null = 0x3f3f3f3f;
char as[N][N];
int sum[N][N];
void solve(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){
            cin>>as[i][j];
            sum[i][j]+=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+(as[i][j]=='B');
        }
    }
    auto get =  [&](int a, int b) -> int{ 
        return sum[n][n]*(a/n)*(b/n)+sum[a%n][b%n]+sum[a%n][n]*(b/n)+sum[n][b%n]*(a/n);
        //return 1ll * (x / n) * (y / n) * s[n][n] + s[x % n][y % n] + 1ll * s[x % n][n] * (y / n) + 1ll * s[n][y % n] * (x / n);
    };


    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a ++ , b ++ ,c ++ ,d ++;
        //cout<<a<<b<<c<<d;
        cout<<get(c,d)-get(a-1,d)-get(c,b-1)+get(a-1,b-1)<<endl;
    }
    
}
int32_t main() {
   IOS;
    int T = 1;
    //cin>>T;
    while(T--){
        solve();
    }
    system("pause");
    return 0;
}