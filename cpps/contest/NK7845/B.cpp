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
    int n,x,y;
    cin>>n>>x>>y;
    vector <double> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    if(num.size()==1){
        cout<<min(num[0]*x/100,max(0.0,num[0]-y));
        return;
    }
    sort(num.begin(),num.end());
    double de = 0,mx=num[0],mn = num[1];
    de = mx*x/100.0 + max(0.0,mn-y);
    de = min (de,mn*x/100.0 + max(0.0,mx-y));
    for(int i=2;i<num.size();i++){
        de += num[i];
    }
    cout<<de<<endl;
}
int32_t main() {
   IOS;
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    system("pause");
    return 0;
}