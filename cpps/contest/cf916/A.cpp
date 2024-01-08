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
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long ull;
const int N =1 ;
const int null = 0x3f3f3f3f;

void solve(){
    int n;
    cin>>n;
    string t;
    cin>>t;
    vector <int> num(30);
    rep (i,0,n-1) {
        num[t[i]-'A']++;
    } 
    int res = 0;
    rep (i,0,25){
        if(num[i]>=i+1)
            res++;
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
