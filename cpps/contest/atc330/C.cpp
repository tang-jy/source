#include <iostream>
#include <cmath>
#define int long long
using namespace std;
int n;
int32_t main() {

    cin>>n;
    int ans=1e9;

    for (int z = 0;z <= n;z++) {
        for (int a = 0; a * a <= abs(z-n)||a*a<=abs(z+n); a++) {
            double b = sqrt(abs(z-n) - a * a);
            if (b == (int)b) {
                cout<<z<<endl;return 0;
            }
            b = sqrt(abs(z + n) - a * a);
            if (b == (int)b) {
                cout << z << endl;return 0;
            }
        }
    }
}