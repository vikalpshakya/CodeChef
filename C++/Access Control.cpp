#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int m, k;
        cin >> m >> k;
        string n;
        cin >> n;

        if (n[0] == '0') {
            cout << "NO\n";
        } else {
            int maxi = 0;
            int count = 0;
            for (int i = 0; i < m; i++) {
                if (n[i] == '0') {
                    count++;
                    maxi = max(maxi, count);
                } else {
                    count = 0;
                }
            }
            if (maxi > k) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
