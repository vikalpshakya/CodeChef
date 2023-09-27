 // START102D   contest 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    vector<int>vec(n);
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	        cin >> vec[i];
	        sum+= vec[i];
	    }
	    int min = *min_element(vec.begin(),vec.end());
	    cout << sum - min << endl;
	}
	return 0;
}
