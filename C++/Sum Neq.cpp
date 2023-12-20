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

int32_t main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt; cin >> ttt;
    while(ttt--) {
        
        int n; cin >> n;
        set<int>ans;
        vector<int>vec;
        int i = 0;
        FOR(i,n) {
            int a;
            cin >> a;
            vec.pb(a);
            ans.insert(a);
        }
        if(n == 4){
            if(vec[0] + vec[1] != vec[2] + vec[3]) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(n > 4 && ans.size() >= 2) cout << "YES\n";
        else cout << "NO\n";
   
    }
    return 0;
}
