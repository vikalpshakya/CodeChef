
// Contest: START104C
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin >> tt;
	while(tt--){
	int n;
	cin >> n;
	if (n == 1) cout << "YES" << endl;
	else if(n%2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	}
	return 0;
}
