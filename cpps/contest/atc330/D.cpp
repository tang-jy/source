#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 2e3+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
int n,T;
int xx[N],yy[N];
bool ch [N][N];
int32_t main() {
    IOS;
    cin>>n;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j] == 'o') {
                xx[j]++;
                yy[i]++;
                ch[i][j]=1;
            }
        }
    }
    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ch[i][j]){
                res += (xx[j]-1)*(yy[i]-1);
                //cout<<i<<" " <<j<<" "<<yy[i]<<endl;
                
            }
        }
    }
    cout<<res<<endl;

    //system("pause");
    return 0;
}