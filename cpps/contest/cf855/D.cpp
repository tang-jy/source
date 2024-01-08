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
    string s;
    cin>>s;
    vector <int> sa;
    int res = n-1;
    for(int i=0;i<n;i++){
        if(i>=2) res -= (s[i]==s[i-2]);
    }
    cout<<res<<endl;
}
int32_t main() {
   IOS;
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}