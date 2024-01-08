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
void solve(){
    int n;
    cin>>n;
    vector <int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    int res = 0,temp=0;
    for(int i=0;i<n;i++){
        temp = temp + num[i] ;
        int ops = lower_bound(num.begin(),num.end(),temp/(i+1))-num.begin();
       // cout<<ops<<endl;
        res = max(res,i-ops);
    }
    cout<<res<<endl;
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