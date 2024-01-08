#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- "
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int null = 0x3f3f3f3f;
void solve(){
    vector <int> num(3);
    cin>>num[0]>>num[1]>>num[2];
    for(int i=0;i<3;i++) num[i]%=2;
    for(int j=0;j<3;j++){
        if(num[(j+1)%3]==num[(j+2)%3]){
            cout<<1<<" ";
        }
        else {
            cout<<0<<" ";
        }
    }
    cout<<endl;
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