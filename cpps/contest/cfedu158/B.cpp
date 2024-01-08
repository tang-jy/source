#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int T,n;
void solve(){
    cin>>n;
    vector <int> res(n+1);
    vector <int> num(n+1);
    int sum = 0;
    for(int i=1;i<=n;i++){
        cin>>num[i];
        if(i&&num[i]>num[i-1]) sum+=num[i]-num[i-1];
    }
    
    cout<<sum-1<<endl;
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