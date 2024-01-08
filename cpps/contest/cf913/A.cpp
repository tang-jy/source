#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 100;
const int null = 0x3f3f3f3f;
char t[] = {'a','b','c','d','e','f','g','h'};
void solve(){
    string a;
    cin>>a;
    for (int i = 1; i <= 8; i++) {
        if (i + '0' == a[1]) {
            continue;
        }
        std::cout << a[0] << i << "\n";
    }
    for (int i = 1; i <= 8; i++) {
        if (i + 'a' - 1 == a[0]) {
            continue;
        }
        std::cout << (char)(i + 'a' - 1) << a[1] << "\n";
    }
}
int32_t main() {
   IOS;
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}