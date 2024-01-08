#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e8+5;
const int null = 0x3f3f3f3f;
vector <int>  prime;
bool nope[N];
void init (int n){
    for(int i=2;i<=n;++i){
        if(nope[i]==0) { prime.push_back(i);}
        for(auto pj : prime){
            int t = pj;
            if(t*i>n) break;
            nope[t*i] = 1;
            if(i%t==0)  break;
        }

    }
}
void solve(){
    int n,q;
    cin>>n>>q;
    init(n);

    whlie(q--){
        int t;
        cin>>t;
        cout<<prime[t-1]<<"\n";     
    }
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