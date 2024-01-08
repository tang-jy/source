#include <bits/stdc++.h>
#define int long long
#define IOS  std::ios::sync_with_stdio(false)
using namespace std;
typedef pair<int, int> pll;
typedef unsigned long long ull;
const int N = 1e5+10;
const int INF = 2147483647;
const int null = 0x3f3f3f3f;
string a;
int n;
int32_t main() {
    IOS;
    cin>>n;
    cin>>a;
    bool ch1 = 0,ch2=0,ch3=0,ch4=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]=='H') {
            ch1 = 1,ch2=0,ch3=0,ch4=0;
            cnt++;
        }
        else if(a[i]=='E'&&ch1){
            ch1 = 0,ch2=1,ch3=0,ch4=0;
            cnt++;
        }
        else if(a[i]=='B'&&ch2){
            ch1 = 0,ch2=0,ch3=1,ch4=0;
            cnt++;
        }
        else if(a[i]=='U'){
            ch1 = 0,ch2=0,ch3=0,ch4=1;
            cnt++;
        }
        else if(a[i]=='T'){
            ch1 = 0,ch2=0,ch3=0,ch4=0;
            cnt++;
        }
        else {
            ch1 = 0,ch2=0,ch3=0,ch4=0;
        }
    }
    cout<<cnt<<endl;
    system("pause");
    return 0;
}