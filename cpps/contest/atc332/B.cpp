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
    int q,g,m;
    cin>>q>>g>>m;
    int a=0,b=0;
    while(q--){
        if(a==g)  {
            a=0;
        }
        else if(b==0) {
            b = m;
        }
        else {
            int temp=a;
            a = min(a+b,g);
            b = max(0LL,b-(a-temp));//cout<<(a-temp);
        }
    }
    cout<<a<<" "<<b<<endl;
}
int32_t main() {
   IOS;
    int T = 1;
    //cin>>T;
    while(T--){
        solve();
    }
    return 0;
}