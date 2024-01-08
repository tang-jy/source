#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e6+10;
const int null = 0x3f3f3f3f;
bool st[N],stt[N/2];
void solve(){
    int n;
    cin>>n;
    vector <int> num(n);
    bool f =0;
    for(int i=0;i<n;i++) {
        cin>>num[i];
        stt[num[i]]++;
        if(stt[num[i]]) f=1; 
    }
    if(f) {
        cout<<"YES\n";
        return ;
    }
    sort(num.begin(),num.end());
    int i=0,j=n-1;
    while (i<j){
        int val = num[i]+num[j];
        if(st[val]) {
            cout<<"YES\n";
            return;
        }
        st[val] = 1;
        i++,j--;
    }
    cout<<"NO\n";
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