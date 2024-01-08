#include"bits/stdc++.h"

using namespace std;
using i64 = long long;
using LL = long long;
using ll = long long;
using ULL = unsigned long long;
using ld = long double;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define cr "\n"
#define endl "\n"
#define lson k+k //二叉树左儿子
#define rson k+k+1 //二叉树右儿子
#define pb push_back
#define ppb pop_back
#define X first
#define Y second
#define pii pair<int,int>
#define vii vector<int>
#define vdb vector<double>
#define rep(i,k,n) for(int i=k;i<=n;i++)//前到后
#define per(i,k,n) for(int i=k;i>=n;i--)//后到前
#define mem(name,number) memset(name,number,sizeof(name))
#define mem1(name,n,k) for(int i=0;i<n;i++) name[i]=k //初始化一维数组
#define mem2(name,n,m,k) for(int i=0;i<n;i++) for(int j=0;j<m;j++) name[i][j]=k //初始化二维数组
#define vint vector<int>::iterator
#define vl vector<ll>::iterator
#define sint set<int>::iterator
#define sl set<ll>::iterator
#define msint multiset<int>::iterator
#define msl multiset<ll>::iterator
#define e 1000000000LL
#define mod 998244353LL
#define _size 100000
#define int long long
//iota
//priority_queue
//max_element
//min_element
//lcm = a* b / gcd(a, b)

void solve() {
    int n;
    cin>>n;
    if(n==5){
        cout<<"4 5 2 1 3\n";
    }
    else if(n==6){
        cout<<"6 5 1 2 4\n";
    }
    else {
        int a=n-1;
        int b=n;
        int c=n%2?(n+1)/2:(n+4)/2;
        int d=n%2?1:4;
        int ee=2;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<ee<<endl;
    }
    
}

signed main() {
    IOS;
    int t = 1;
    cin>>t;
    while (t--)  solve();

    return 0;
}