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
        
        int n ,x,y;
        cin >> n >> x >> y ;
        int small = y / 3;
        if ( n > x) {cout << "NO" << endl; }
        
        
        // else if(n <= (x+small)) {cout << "YES" << endl ; }
        
        else if(n <= (x/2)) {cout << "YES" << endl; }
        else if((x-small)/2 + small >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}
