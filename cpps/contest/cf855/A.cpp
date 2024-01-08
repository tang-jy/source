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
    char a [] = {'m','e','o','w'};
    void solve(){
        string ma ;
        int n;
        cin>>n;
        cin>>ma ;
        int pos = 0;
        if(n<4) {cout<<"NO\n";return ;}
        if(ma[0]!='m'&&ma[0]!='M') {cout<<"NO\n";return ;}
        for(int i=0;i<n;i++){
            char tmp = ma[i];
            if(isupper(tmp)) tmp = tolower (tmp);
            if(tmp == a[pos]) continue;
            else if(pos<3&&tmp == a[pos+1]) {
                pos++;
                continue;
            }
            //cout<<i;
            cout<<"NO\n";return;
        }
        if(pos<3) {cout<<"NO\n";return ;}
        cout<<"YES\n";
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