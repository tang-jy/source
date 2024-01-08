#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e3+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int n,q,blen,slen;
int gu[N][N];
bool sq[N][N];
int32_t main() {
    IOS;
    cin>>n>>slen>>blen;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        gu[a][b] ++;
        gu[a][b+slen]--;
        gu[a+slen][b]--;
        gu[a+slen][b+slen]++;
    }
    for(int i=1;i<=blen;i++){
        for(int j=1;j<=blen;j++){
            gu[i][j] += gu[i-1][j]+gu[i][j-1]-gu[i-1][j-1];
        }
    }
    for(int i=1;i<=blen;i++){
        for(int j=1;j<bl;j++){
            gu[i][j] = (gu[i][j]==0) ?0:1;
            gu[i][j]+= gu[i-1][j]+gu[i][j-1]+gu[i-1][j-1];
        }
    }
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        int sum = gu[x+slen-1][y+slen-1]-gu[x+slen-1][y-1]-gu[x-1][y+slen-1]+gu[x-1][y-1];
        cout<<slen*slen - sum<<endl;
    }

    
   // system("pause");
    return 0;
}