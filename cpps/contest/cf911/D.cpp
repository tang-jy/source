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
vector <int> s[N];
void init (int n=100000){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            s[j].push_back(i);
            // j 对应的因子
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vector <int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    sort(num.begin(),num.end());
    vector <int> cnt(N+1);
    vector <int> fas(N+1);
    int pre =0,ans=0;
    for(int i=0;i<n;i++){
        int now=num[i];
        ans += pre;
        for(int i=s[now].size()-1;i>=0;i--){
            int temp = s[now][i];
            fas[temp]+=cnt[temp];
            pre += temp*fas[temp];
            for(auto z : s[temp]){
                fas[z]-=fas[temp];  
            }
        }
        for(auto z : s[now]){
            cnt[z] ++;
            fas[z] = 0 ;
        }
    }
    cout<<ans<<endl;
}
int32_t main() {
   IOS;
    int T = 1;
    init();
    cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}