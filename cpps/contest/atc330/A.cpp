#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int k,n,num[N];
void solve(){
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]>=k) cnt++;
    }
    cout<<cnt<<endl;
}
int32_t main() {
    IOS;
    solve();
    system("pause");
    return 0;
}