#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int T,n,x;
void solve(){
    cin>>n>>x;
    vector <int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    int res=num[0];
    if(num.size()==1){
        cout<<max(num[0],(x-num[0])*2)<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(i==n-1) {
            res = max(res,(x-num[n-1])*2); 
        } 
        //cout<<i<<" "<<num[i]<<" "<<num[i-1]<<endl;
        res = max(res,num[i]-num[i-1]);
    }
    if(res == 0) cout<<(x-num[0])*2<<endl;
    else cout<<res<<endl;
}
int32_t main() {
    IOS;
    cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}