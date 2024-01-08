#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long ull;
const int N = 2e5+10;
const int null = 0x3f3f3f3f;
void solve() {
    long long n, T;
    cin>>n>>T;

    
    vector<int> a(n);
    long long sum = 0;
    int q = 0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if (a[i] <= T) {
            sum += a[i];
            q++;
        }
    }
    if (sum == 0) {
        cout << 0;
        return;
    }
    
    long long ans = T / sum * q;
    T %= sum;
    int cnt = 0;
    int i = 0;
    while (T > 0 && cnt < n) {
        if (T >= a[i]) {
            T -= a[i];
            ans++;
            cnt = 0;
        }
        else cnt++;
        i = (i + 1) % n;
    }
    
    cout << ans;
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