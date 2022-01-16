#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
 
int main()
{
    int t; cin >> t;
 
    while (t--) {
        ll n; cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
 
        ll x = 1;
        if (v[0] == 1) x++;
        for (int i = 1; i < n; i++) {
            if (v[i] == 1) {
                if (v[i - 1] == 1) {
                    x += 5;
                } else {
                    x++;
                }
            } else {
                if (v[i - 1] == 0) {
                    x = -1;
                    break;
                }
            }
        }
 
        cout << x << endl;
    }
 
    return 0;
}