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
#define push_back pb
#define push pb
#define endl "\n"
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long ull;
const int N = 1e5+10 ;
const int null = 0x3f3f3f3f;

void solve(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n+1),b(n+1);
    vector <int> s(n+1);
    rep (i,1,n) {
        cin >> a[i];
        s[i] = s[i-1]+a[i];
    }
    vector <pii> ppb(n+1);
    
    rep (i,1,n){ 
        cin >> b[i];
        ppb[i].first = b[i];
        ppb[i].second = i;
    }
    sort(ppb.begin()+1,ppb.end(),greater <pii>());
    int res = 0;
    rep (i,1,n){
        b[i]=max(b[i],b[i-1]);
    }
    rep(i,1,n){
        if(ppb[i].second>k) continue;
        int tmp = s[ppb[i].second] + (k-ppb[i].second)*b[ppb[i].second];//cout<<i<<" "<<tmp<<" |";
        
        res = max(res,tmp);
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
