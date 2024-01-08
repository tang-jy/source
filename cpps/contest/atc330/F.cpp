#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e5+10;
const int null = 0x3f3f3f3f;
void solve(){
    int n,q;
    cin>>n>>q;
    vector <int> x(n+1),y(n+1);
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    vector <int> sx(n+1),sy(n+1);
    for(int i=1;i<=n;i++){
        sx[i] = sx[i-1] + x[i];
        sy[i] = sy[i-1] + y[i];
    }
    
    sort(x.begin()+1,x.end());
    sort(y.begin()+1,y.end());
    auto check = [&] (int mid) -> bool{

    };

    int l=0,r=1e18;
    while(l<r){
        int mid = l + r>>1;
        if(check(mid)) l=mid;
        else r=mid+1;
    }
    cout<<l<<endl;
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