#include <bits/stdc++.h>
// #include <iostream>
// #include <cstdio>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <set>
// #include <unordered_set>
// #include <queue>
// #include <deque>
// #include <iomanip> // std::fixed std::setprecision(x) 保留x位小数
// #include <array>
// #include <bitset>
// #include <functional>
// #include <ranges>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- \n"
#define first l
#define second r
#define push_back pb
#define push pb
#define endl "\n"
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long ull;
const int N = 100000 ;
const int MOD = 998244353;
int dp [505][505];
int res [30][30][505];
void init (){
    for(int i=0; i<=505; i++) {
        for(int j=0; j<=i; j++) {
            if(j==0) dp[i][j]=1; 
            else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%998244353;
        }
    }
}
void solve(){
    int n;
    string s;
    cin>>n>>s;
    init();
    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            for(int k=2; k<=i-j+1; k++) {
                res[s[j]-'a'][s[i]-'a'][k]=(res[s[j]-'a'][s[i]-'a'][k]+dp[i-j-1][k-2])%MOD;
            }
        }
    }
    int q;
    cin>>q;
    while(q--) {
        char c1, c2;
        int x;
        cin>>c1>>c2>>x;
        cout<<res[c1-'a'][c2-'a'][x]<<endl;
    }
}
int32_t main() {
IOS;
    int T = 1;
    ///cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}
