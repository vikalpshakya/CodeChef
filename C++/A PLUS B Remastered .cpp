#include <bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define input(x) for(auto &a:x) cin >> a;
#define output(x) for(auto a:x) cout << a <<" ";
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std; 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt; cin >> ttt;
    while(ttt--) {
        
        
        int n ; cin >> n;
        vector<int>vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        vector<int>vec1(n);
        for(int i = 0; i < n; i++) cin >> vec1[i];
        vector<int>result(n);

        sort(vec.begin(), vec.end());
        sort(vec1.rbegin(), vec1.rend());

        bool yes = true;
        for (int i = 0; i < n; ++i) {
            result[i] = vec[i] + vec1[i];
            if (i > 0 && result[i] != result[i - 1]) {
                yes = false;
                break;
            }
        }

        if (!yes) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n;i++) {
                cout << vec[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < n; i++) {
                cout << vec1[i] << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}
