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
    int n;
    cin>>n;
    vector<int>a(n+1);

    for(int i=1;i<=n;i++) cin>>a[i];

    priority_queue<int>q;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0) {
            if(q.size()) ans+=q.top(),q.pop();
        }
        else q.push(a[i]);
    }

    cout<<ans<<endl;

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