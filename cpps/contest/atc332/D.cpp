#include <bits/stdc++.h>
#include <vector>
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
const int N =20 ;
const int null = 0x3f3f3f3f;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector <int>> a(n,vector<int> (m)),b(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>b[i][j];
    vector <int> row (n);
    iota(row.begin(),row.end(),0);
    int res = null,ans = null;
    do {
        vector <int> col(m);
        iota(col.begin(),col.end(),0);
        do {
            bool flag = 1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    flag &= (a[row[i]][col[j]]==b[i][j]);
                }
            }
            if(flag){
                res = 0;
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        res += (row[i]>row[j]);
                    }
                }
                for(int i=0;i<m;i++){
                    for(int j=i+1;j<m;j++){
                        res += (col[i]>col[j]);
                    }
                }
                ans = min(ans,res);
            }
        }while(next_permutation(col.begin(),col.end()));
    } while (next_permutation(row.begin(),row.end()));
    cout<<(ans==null?-1LL:ans)<<endl;
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
