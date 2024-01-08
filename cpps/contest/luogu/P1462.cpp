#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int to[N],idx,head[N],nec[N],val[N];
void add(int x,int y,int z){
    val[idx] = z ,to[idx] = y,nec[idx] = head[x],head[x] = idx++;
}
int n,m,h;
int num[N];
int dist[N];
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
inline bool  check(int mid){
    if(mid<num[1]) return 0;
    priority_queue <pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > qu;
    memset(dist,0x3f,sizeof dist);
    dist[1] = 0;
    qu.push({0,1});
    while(!qu.empty()){
        int dis = qu.top().first,pos = qu.top().second;
        qu.pop();
        for(int i=head[pos];i!=-1;i=nec[i]){
            int ne=to[i];
            //cout<<"nex is" << ne<<endl;
            //cout<<num[ne]<<" "<<mid<<endl; 
            if(num[ne]>mid){continue;}
            if(dist[ne]>dist[pos]+val[i]){
                dist[ne] = dist[pos] + val[i];
                qu.push({dist[ne],ne});
            }
        }
        //cout<<endl;
    }
    //for(int i=1;i<5;i++) cout<<dist[i]<<" ";
    //cout<<"it is"<<dist[n]<<endl;
    if(dist[n]>h) return 0;
    else return 1;
}
int32_t main() {
    n=read(),m=read(),h=read();
    int mx = -1e5;
    memset(head,-1,sizeof head);
    for(int i=1;i<=n;i++){
        num[i] = read();
        mx = max(mx,num[i]);
    }
    while(m--){
        int a,b,c;
        a=read(),b=read(),c=read();
        add(a,b,c);
        add(b,a,c);
    }
    if(check (mx) == 0) {
        cout<<"AFK\n";
        return 0;
    }
    int l=0,r=1e9;
    while(l<r){
        int mid = l+r>>1;
        //cout<<mid<<endl;
        //cout<<l<<"    "<<r<<endl;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    write(l);
    cout<<"\n";
   // system("pause");
    return 0;
}