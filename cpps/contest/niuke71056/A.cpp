#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
string a;
int n;
int32_t main() {
    IOS;
    cin>>n;
    int pos = 0,cnt = 0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a.length()==3) {
            pos=i;
            cnt++;
        }
    }
    cout<<pos<<" "<<cnt<<endl;
    system("pause");
    return 0;
}