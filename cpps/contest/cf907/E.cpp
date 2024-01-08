#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int T,n,k;
inline int gcd(int a,int b) {
    return b>0 ? gcd(b,a%b):a;
}

void solve(){
    cin>>n>>k;
    int res = 0;
    vector <int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(i)res+=(gcd(num[i-1],num[i])==1) ?1:0;
    }
    //cout<<"it is "<<res<<"  ";
    if(num==vector<int>(n,1)){
        cout<<n-max(1LL,k)<<endl;
        return ;
    }
    vector <int> cnnt1;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(num[i] == 1){
            int j = i;
            while(j+1<n&&num[j+1]==1) j++;
            int len = j - i + 1;
            if(i==0||j==n-1){
                cnt1+=len;//cout<<len<<endl;
            }
            else {
                cnnt1.push_back(len);
            }
            i = j;
        }
        else {
            int j = i;
            while(j+1<n&&num[j+1] != 1&&gcd(num[j],num[j+1]) == 1) j++;
            int len = j - i + 1 ;
            //cout<<len;
            cnt2 += (len-1)/2;
            if(len%2==0) cnt1++;
            i = j;
        }
        
    }
    //cout<<cnt1<<"  "<<cnt2<<endl;
    //优先处理 -2 
    int temp = min(k,cnt2);//处理 -2  cnt
    res -= temp*2;
    k -=temp;
    sort(cnnt1.begin(),cnnt1.end());
    for(auto z : cnnt1) {
        //cout<<"z is "<<z << "\n";
        temp = min (z,k) ; // 处理 -1 cnt
        k -= temp;
        if(temp==z) res -=(z+1);
       else  res -=temp; 
       //cout<<res<<endl;
    }
    temp = min (k,cnt1);
    //cout<<"-2 is"<<temp<<endl;
    k -= temp;
    res -= temp;
    cout<<res<<endl;
}
int32_t main() {
    //IOS;
    cin>>T;
    while(T--){
        solve();
    }
    //system("pause");
    return 0;
}