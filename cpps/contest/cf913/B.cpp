#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6;
bool st[N];
void solve() {
    string s;
    cin >> s;
    vector<int> d, x;
    memset(st,0,sizeof st);
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'B') {
            if (d.size() == 0) {
                continue;
            } else {
                st[d.back()] = true;
                d.pop_back();
            }
            continue;
        }
        if (s[i] == 'b') {
            if (x.size() == 0) {
                continue;
            } else {
                st[x.back()] = true;
                x.pop_back();
            }
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            d.push_back(i);
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            x.push_back(i);
        }
    }
    for (int i = 0; i < (int)s.size(); i++) {
        if (!st[i] && s[i] != 'B' && s[i] != 'b') {
            cout << s[i];
        }
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;

}