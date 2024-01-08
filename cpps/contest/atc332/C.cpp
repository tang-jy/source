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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int logo = 0,costp = m,costl=0;
    for(int i=0;i<n;i++){
        //cout<<i<<" "<<costp<<" "<<costl<<endl;
        if(s[i]=='0') {
            costp = m;
            costl = logo;
        }
        else if(s[i]=='1'){
            if(costp != 0 ) {costp--;continue;}
            else if(costl != 0 ){costl--;continue;}
            else {logo++;} 
        }
        else {
            if(costl != 0 ){costl--;continue;}
            else {logo++;} 
        }
    }
    cout<<logo<<endl;
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