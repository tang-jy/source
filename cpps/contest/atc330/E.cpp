#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int n,q;
inline int read(){
    int x=0,f=1;
    char c=getchar();
    while(c<'0'||c>'9'){
        if(c=='-')
            f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
        x=(x<<1)+(x<<3)+(c^48);
        c=getchar();
    }
    return x*f;
}
inline void write(int x){
    if(x<0){
        putchar('-');
        x=-x;
    }
    if(x>9)
      write(x/10);
    putchar(x%10+'0');
}
int vis[N],num[N];
int32_t main() {
    n = read(),q=read();
    set <int> st;
    for(int i=0;i<=n;i++){
        st.insert (i);
    }
    for(int i=1;i<=n;i++){
        num[i] = read();
        if(num[i]<=n) st.erase(num[i]);
        if(num[i]<=n) vis[num[i]]++;
    }
    while(q--){
        //for(auto z : st)  cout<<z<<" ";
        //cout<<"\n";
        int pos = read(),x = read();
        int val = num[pos];
        if(x<=n){
            if(vis[x]==0) st.erase(x);
            vis[x]++;
        }
        if(val<=n){
            --vis[val];
            if(vis[val]==0) st.insert(val);
        }
        write(*st.begin());
        num[pos] = x;
        cout<<"\n";
    }
    //system("pause");
    return 0;
}