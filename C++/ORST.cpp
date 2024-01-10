#include <bits/stdc++.h>
using namespace std;

int main() { 
    int tt; cin >> tt;
    while(tt--) {
        
        int n , m;
        cin >> n >> m;
        vector<int>vec1(n);
        vector<int>vec2(m);
        for(int i = 0 ;i < n; i++) 
            cin >> vec1[i];
        for(int i = 0; i < m; i++) {
            cin >> vec2[i];
        }
        // for(int i = 0; i < m; i++ ){
        //     sort(vec1.end()-vec2[i] , vec1.end());
        // }
        int maxi = *max_element(vec2.begin(),vec2.end());
        sort(vec1.end()- maxi , vec1.end());
        for(auto i : vec1) cout << i << " ";
        cout << "\n";
        
    }
}
