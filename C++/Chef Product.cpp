#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define ff first
#define ss second
#define yes cout << 'Y' << 'E' << 'S' << endl;
#define no cout << 'N' << 'O' << endl;

void ans() {
    ll n;
    cin >> n;
    ll sqrt_n = sqrtl(n);
    if (n % 2 == 1) {
        sqrt_n++;
    }
    cout << sqrt_n / 2 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ans();
    }
    return 0;
}
