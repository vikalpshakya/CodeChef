#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    int a,b,c;
	    cin >> a >> b >> c;
	    int first = a>b?b:a;
	    b-=first;
	    int second = b>0?(c>b?b:c):0;
	    cout << (first+second>=n?"YES":"NO")<<endl;
	}
	return 0;
}
