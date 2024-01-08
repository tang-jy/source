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
const int N =7 ;
const int null = 0x3f3f3f3f;
int a,b,c,d,e;
int x,y,z,k;
void solve(){
    cin>>a>>b>>c>>d>>e;
    cin>>x>>y>>z>>k;
    int sum = a*x + b*y + c*d + d*k;
    if(e>sum) cout<<"Yes\n";
    else cout<<"No\n";
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
