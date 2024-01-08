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
int cnt1[30],cnt2[30];
void solve(){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    memset(cnt1,0,sizeof(cnt1));
    memset(cnt2,0,sizeof (cnt2));
    
    for(char z : s){
        if(isupper(z)) {
            cnt1[z-'A']++;
        }
        else {
            cnt2[z-'a']++;
        }
    }
    
    int res =0;
    for(int i=0;i<26;i++){
        res+=min(cnt1[i],cnt2[i]);
        int temp = max(cnt1[i] -  min(cnt1[i],cnt2[i]),cnt2[i] - min(cnt1[i],cnt2[i]));
        if(k!=0&&(cnt1[i]!=0||cnt2[i]!=0)){
            res += min(temp/2,k);
            k = max(0LL,k-temp/2);
        }
    }
    cout<<res<<endl;
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