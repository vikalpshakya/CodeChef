// Starters 105 
#include <iostream>
using namespace std;

int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    int n; cin >> n;
    	if(n<=1) cout << 0 << endl;
    	else {
    	    int a = n - 2;
    	    cout << (a/7)+1 << endl;
    	    
    	}
	}
	return 0;
}
