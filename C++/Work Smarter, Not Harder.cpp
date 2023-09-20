// Starters 101 Division 4 (Rated)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int l,v1,v2;
	    cin >> l >> v1 >> v2;
	    float ans1,ans2;
	    ans1 = (float)l/v1;
	    ans2 = (float)l/v2;
	    ans1 = ceil(ans1);
	    ans2 = ceil(ans2);
	    if(ans1 == ans2) cout << -1 << endl;
	    else{
	        cout << ans1 - (ans2+1) << endl;
	    }
	    
	}
	return 0;
}


