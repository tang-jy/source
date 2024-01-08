#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e3+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int T,n;
string s;
void solve(){
    cin>>n;
    cin>>s;
    int len = 0;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        int j = i;
        while(s[j] == '.'&&j<n) j++;
        len = max(j-i,len);
        i = j;
    }
    for(auto z : s) {
        if(z=='.')cnt++;
    }
    if(len > 2) {
        cout<<2<<endl;
    }
    else {
        cout<<cnt<<endl;
    }
}
int32_t main() {
    IOS;
    cin>>T;
    while(T--) {
        solve();
    }
   // system("pause");
    return 0;
}
