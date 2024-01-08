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
int mod =  998244353;
int jie[N],num[N];
void init (int n = 2e5+1) {
    num[0] = 1;
    int base = 26;
    for(int i=4;i<=n;i++){
        num[i] = base*(i-2)%mod;
        base*=base;
    }

}
void solve(){
    int n;
    cin>>n;
    if(n>3) {
        cout<<0<<endl;return;
    }
    else if(n==3) {
        cout<<1<<endl;return ;
    }
    cout<<num[n];
}
int32_t main() {
   IOS;
    int T = 1;
    init();
    for(int i=1;i<=10;i++){
        cout<<" "<<jie[i]<<endl;
    }
    cin>>T;
    while(T--){
        solve();
    }
    system("pause");
    return 0;
}