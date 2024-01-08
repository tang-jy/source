#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int n,l,r;

int32_t main() {
    IOS;
    cin>>n>>l>>r;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t<l) cout<<l<<" ";
        else if(t>r) cout<<r<<" ";
        else cout<<t<<" ";
    }
    cout<<endl;
    //system("pause");
    return 0;
}