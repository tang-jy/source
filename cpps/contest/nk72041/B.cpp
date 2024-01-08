#include <bits/stdc++.h>
#include <functional>
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
const int N =150 ;
const int null = 0x3f3f3f3f;
int n,m,x;

void solve(){
    cin>>n>>m>>x;
    vector <int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];    
    }
    for(int j=0;j<m;j++){
        int t;
        cin>>t;
        if(t<=1) continue;
        b[j] = t;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt = 0,sum = 0;
    for(int i=n-1,j=m-1;i>=0&&j>=0;i--,j--){
        sum = a[i] * b[i];
        if(x<=b[i]) {
            cout<<cnt+1<<endl;
            return;
        }
        else if (j>=1&&x<=b[i]+b[i-1]) {
            cout<<cnt+2<<endl;
            return;
        }
        else{
            x-=sum;
            cnt+=2;
        } 
    }
    cout<<-1<<endl;
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
