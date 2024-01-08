#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
#define whlie while
#define debug cout<<"---------------true---------------- ";
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e5+10;
const int null = 0x3f3f3f3f;
void solve(){
    int n;
    cin>>n;

    vector <int> L(n+1);
    vector <int> R(n+1);
    for(int i=0;i<n;i++){
        cin>>L[i]>>R[i];
    }
    auto check = [&] (int mid) -> bool{
        int pos = 0;
        int l_pos = 0,r_pos = 0;
        for(int i=0;i<n;i++){
            int ran1 = l_pos-mid;
            int ran2 = r_pos+mid;
            if(R[i]>=ran1&&L[i]<=ran2){
                l_pos=(ran1<L[i])?L[i]:ran1;
                r_pos=(ran2>R[i])?R[i]:ran2;
                //更新
            }
            else {
                return true;
            }
        }
        return false;
    };
    int l=0LL,r=1e18;
    while(l<r){
        int mid  = (l+r)>>1;
        //cout<<l<<" ";
        if(check(mid)) l=mid+1;
        else r = mid;
    }
    cout<<l<<endl;
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