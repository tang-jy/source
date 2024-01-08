#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e5+10;
const int null = 0x3f3f3f3f;
string a;
int n;
void solve()
{
    map<char, int> mp;
    cin>>n>>a;
    int mx = 0, mn = null;
    int res = 0;
    if (n % 2 == 1)
        res++;
    for (auto z : a)
        mp[z]++;
    for (auto z : mp)
    {
        int tmp = z.second;
        mx = max(mx, tmp);
        mn = min(mn, tmp);
    }
    cout << max(res, mx - (n - mx)) << endl;
}
int32_t main() {
   IOS;
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    system("pause");
    return 0;
}