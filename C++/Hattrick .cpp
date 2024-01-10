#include <bits/stdc++.h>
using namespace std;

int main() { 
    int tt; cin >> tt;
    while(tt--) {
        // int a,b,c,d,e,f;
        vector<char>vec(6);
        for(int i = 0; i < 6; i++ ) {
            cin >> vec[i];
        }
        // int prev = vec[0];
        bool a1 = false;
        for(int i = 0; i < 6; i++ ) {
            if(vec[i] == 'W'   && vec[i+1] == 'W' && vec[i+2] == 'W') {
                cout << "YES\n" ;
                a1 = true;
                break;
            }
            // else
            // prev= vec[i];
        }
        if(!a1) cout << "NO\n";
    }
}
