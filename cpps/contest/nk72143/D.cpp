#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e3+10;
const int null = 0x3f3f3f3f;
struct  dsu{
    vector <int> m,size;
    dsu(int n):m(n+1),size(n+1,1){iota(m.begin(),m.end(),0);}
    //下标从 1 开始
    int find(int x){
        while(x!=m[x]) x=m[x]=m[m[x]];
        return x;
    }
    bool same(int x,int y){return find(m[x])==find(m[y]);}
    bool merge(int x,int y){
        x=find(x),y=find(y);
        if(x == y) return false;
        size[x]+=size[y];
        m[y]=x;
        return true;
    }
    int get_size(int x){
        return size[find(x)];
    }
};
void solve(){
    int n;
    cin>>n;
    dsu d(n);
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        d.merge(i,t);
    }
    for(int i=1;i<=n;i++){
        cout<<d.get_size(i)<<endl;
    }
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