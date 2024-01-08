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
    vector <int> num(n+1);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector <int> dp;
    vector <int> l(n+1),r(n+1);
    dp.push_back(num[0]);
    dp.push_back(num[0]);
    for(int i=1;i<n;++i){
        if(num[i]>dp.back()){
            dp.push_back(num[i]);
        }
        else {
            *lower_bound(dp.begin(),dp.end(),num[i]) = num[i];
        }
        l[i] = dp.size();
    }
    vector <int> dp2;
    dp2.push_back(num[n-1]);
    for(int i=n-2;i>=1;--i){
        if(num[i]>dp2.back()){
            dp2.push_back(num[i]);
        }
        else {
            *lower_bound(dp2.begin(),dp2.end(),num[i]) = num[i];
        }
        r[i] = dp2.size();
    }
    int res = -1e5;
    for(int i=0;i<n;i++){
        res = max(res,r[i]+l[i]);
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
    system("pause");
    return 0;
}