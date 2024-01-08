#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 5e5+10;
const int INF = 2147483647;
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
int n;
int32_t main() {
    IOS;
    cin>>n;
    dsu dd(n);
    int res = 0;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        dd.merge(t,i);
    }
    for(int i=1;i<=n;i++){
        res = max (dd.get_size(i),res);
    }
    cout<<res<<endl;
    system("pause");
    return 0;
}