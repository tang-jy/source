#include <bits/stdc++.h>
#include<array>
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 3e5+10;
const int null = 0x3f3f3f3f;
void solve(){
    int n;
    char s[N];
    cin>>n;
    scanf("%s",s+1);
    vector <array <int,2>> edge(n+1);
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        edge[i][0] = l;
        edge[i][1] = r;
    }
    int val = 0,res = 1e9;
    auto dfs  = [&] (auto &&dfs,int pos) -> void{
        if(edge[pos][0]==0&&edge[pos][1]==0) {
            res = min (res,val);
            return;
        }
        if(edge[pos][0] != 0){
            if(s[pos]!='L') val+=1;
            dfs(dfs,edge[pos][0]);
            if(s[pos]!='L') val-=1;
        }
        if(edge[pos][1]!=0) {
            if(s[pos]!='R') val+=1;
            dfs(dfs,edge[pos][1]);
            if(s[pos]!='R') val-=1;
        }
    };
    dfs(dfs,1);
    cout<<res<<endl;
}
int32_t main() {
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}